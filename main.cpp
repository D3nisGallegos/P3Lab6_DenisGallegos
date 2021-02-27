#include <iostream>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include "Cancion.hpp"
#include "Genero.hpp"
#include "Playlist.hpp"
#include "Album.hpp"

 using namespace std; 

int main(int argc, char** argv) {
	
	int opcion = 0; 
	vector <Genero*> listageneros; 
	vector <Cancion*> listacanciones; 
	vector <Playlist*> listaplay; 
	vector <Album*> listaalbum; 
 	while (opcion != 4){
		cout << "     MENU: " <<endl; 
		cout << "1) Mantenimiento. " <<endl; 
		cout << "2) Sobrecargar el operador *" <<endl; 
		cout << "3) Sobrecargar el operador +" <<endl; 
		cout << "4) Salir. " <<endl; 
		cin >> opcion; 
		switch (opcion){
			case 1: 
				{
				int opcion2 = 0; 
				while (opcion2 != 7){
					cout << "     MANTENIMIENTO: " <<endl; 
					cout << "1) Mantenimiento de Generos." <<endl; 
					cout << "2) Mantenimiento de Canciones." <<endl; 
					cout << "3) Listar Generos." <<endl;
					cout << "4) Listar canciones. " <<endl; 
					cout << "5) Listar Playlists." <<endl; 
					cout << "6) Listar Albums. " <<endl; 
					cout << "7) Salir." <<endl;
					cin >> opcion2; 
					switch (opcion2){
						case 1:
							{
							cout << "Mantenimiento de generos: " <<endl; 
							int opcion3 = 0; 
							while (opcion3 != 4){
								cout << "1) Agregar. " <<endl; 
								cout << "2) Modificar" <<endl; 
								cout << "3) Eliminar. " <<endl; 
								cout << "4) Salir. " <<endl; 
								cin >> opcion3; 
								switch (opcion3){
									case 1:
										{
										char resp = 's';
										while (resp == 's'){
										 	cout << "Ingrese el nombre de un genero para agregar: " <<endl;
										 	string n = ""; 
										 	cin.ignore();
										 	getline(cin, n);
										 	Genero* gen = new Genero(n);
										 	listageneros.push_back(gen);
										 	cout << "Genero agregado. (s) ingresar otro. (n) salir. " <<endl; 
										 	cin >> resp; 
										}//Fin del while que pide generos. 
										cout << "Lista total de generos: " <<endl; 
										for (int c = 0; c < listageneros.size();c++){
											Genero* objeto = listageneros [c]; 
											cout << c << ": " << objeto->GETnombre() <<endl; 
										}
										cout << "" <<endl; 
										break; 
										}//Fin del caso 1.
								}//Fin del switch del CRUD para generos. 
							}//Fin del while que pide un CRUD para generos. 
							break; 
							}//Fin del caso 1.
						case 2:
							{
							cout << "Mantenimiento de canciones: " <<endl; 
							int opcion3 = 0; 
							while (opcion3 != 4){
								cout << "1) Agregar. " <<endl; 
								cout << "2) Modificar" <<endl; 
								cout << "3) Eliminar. " <<endl; 
								cout << "4) Salir. " <<endl; 
								cin >> opcion3;
								switch (opcion3){
									case 1:
										{
										cout << "Agregar cancion: " <<endl; 
										cout << "Ingrese el nombre: " <<endl; 
										cin.ignore();
										string n = "";
										getline(cin, n);
										cout << "Ingrese el artista: " <<endl; 
										string a = ""; 
										cin.ignore();
										getline(cin, a);
										cout << "Ingrese la duracion: " <<endl; 
										cin.ignore(); 
										string d = ""; 
										getline(cin, d); 
										bool v = false; 
										while (v == false){
											cout << "Ingrese el numero de genero: " <<endl; 
											for (int c = 0; c < listageneros.size();c++){
												Genero* objeto = listageneros [c]; 
												cout << c << ": " << objeto->GETnombre() <<endl; 
											}
											int elem = 0;
											cin >> elem; 
											if (elem >= 0 && elem <= listageneros.size() - 1){
												Genero* objeto = listageneros [elem]; 
												cout << "El genero escogido fue: " << objeto->GETnombre();
												Cancion* can = new Cancion(); 
												can->SETnombre(n);
												can->SETartista(a);
												can->SETduracion(d);
												can->SETgenero(objeto);
												listacanciones.push_back(can);
												v = true; 
												cout << " Cancion agregada correctamente. " <<endl; 
											}else {
												cout << "Posicion invalida. "<<endl;
											}
										}//Fin del while que pide el genero. 
										break; 
										}//Fin del caso 1.
								}//Fin del switch del CRUD para canciones. 
							}//Fin del while que pide un CRUD para canciones. 
							break; 
							} //Fin del caso 2. 
						case 3:
							{
							cout << "Listar generos: " <<endl; 
							cout << "Lista completa de generos: " <<endl; 
							for (int c = 0; c < listageneros.size();c++){
								Genero* objeto = listageneros [c]; 
								cout << c << ": " << objeto->GETnombre() <<endl; 
							}	
							break; 
							}//Fin del caso 3. 
						case 4:
							{
							cout << "Listar Canciones: " <<endl; 
							cout << "Lista completa de canciones: " <<endl; 
							for (int c = 0; c < listacanciones.size();c++){
								Cancion* objeto = listacanciones [c]; 
								cout << c << ": " << objeto->GETnombre() <<endl; 
							}	
							break; 
							}//Fin del caso 4.
						case 5:
							{
							cout << "Listar Playlists: " <<endl; 
							cout << "Lista completa de Playlists: " <<endl; 
							for (int c = 0; c < listaplay.size();c++){
								Playlist* objeto = listaplay [c]; 
								cout << c << ": " << objeto->GETnombre() <<endl; 
							}	
							break; 
							}//Fin del caso 5.
						case 6:
							{
							cout << "Listar Albums: " <<endl; 
							cout << "Lista completa de Albums: " <<endl; 
							for (int c = 0; c < listaalbum.size();c++){
								Album* objeto = listaalbum [c]; 
								cout << c << ": " << objeto->GETnombre() <<endl; 
							}	
							break; 
							}//Fin del caso 6.
					}//Fin del switch del submenu del modulo 1. 
				}//Fin del while del submenu del modulo 1. 
				break; 
				}//Fin del caso 1. 
			case 2:
				{
				cout << "Sobreescirbir el operador: * " <<endl; 
				bool v = false; 
				cout << "Listar Albums: " <<endl; 
				cout << "Lista completa de Albums: " <<endl; 
				for (int c = 0; c < listaalbum.size();c++){
					Album* objeto = listaalbum [c]; 
					cout << c << ": " << objeto->GETnombre() <<endl; 
				}
				while (v == false){
					cout << "Ingrese el numero de album que desea como base. " <<endl; 
					int elem = 0; 
					cin >> elem; 
					cout << "Ingrese la cantidad de veces a copiar el album. " <<endl; 
					int num = 0; 
					cin >> num;
					if ((elem >= 0 && elem <= listaalbum.size() - 1) && num > 1){
						Album* objeto = listaalbum [elem]; 
						cout << "Ha elegido el album: " << objeto->GETnombre() <<endl; 
						Playlist* play = new Playlist();
						for (int c =0; c < num; c ++){
							for (int j = 0; j < objeto->GETcanciones().size();c++){
								Cancion* canc = objeto->GETcanciones() [j];
								play->GETcanciones().push_back(canc); 
							}
						}
						play->SETnombre(objeto->GETnombre());
						listaplay.push_back(play); 
						cout << "Playlist creada correctamente:  ";
						cout << "Nombre: " << play->GETnombre() << " "<< num << " veces." <<endl; 
						cout << "[";   
						for (int h = 0; h < play->GETcanciones().size();h++){
							Cancion* canci = play->GETcanciones() [h]; 
							cout << canci->GETnombre(); 
							if (h < play->GETcanciones().size() - 1){
								cout << ", ";
							}else {
								cout << "]";
							}
						}	
						v = true; 
					}else {
						cout << "Entradas no validas." <<endl; 
					}
				}//Fin del while que pide el album en el modulo 2. 	
				break; 	
				}//Fin del caso 2. 
			case 3:
				{
				cout << "Sobreescribir el operador: + " <<endl; 
				int opcion2 = 0; 
				while (opcion2 != 5){
					cout << "1) Agregar cancion a playlist. " <<endl; 
					cout << "2) Agregar album completo a playlist. " <<endl; 
					cout << "3) Agregar cancion a album. " <<endl; 
					cout << "4) Unir 2 playlists. " <<endl; 
					cout << "5) Salir. " <<endl; 
					cin >> opcion2; 
					switch (opcion2){
						case 1: 
							{
							cout << "Ingrese si desea crear una playlist: (s/n)" <<endl; 
							char resp; 
							cin >> resp; 
							if (resp == 's'){
								cout << "Ingrese el nombre de la playlist: " <<endl; 
								string n = ""; 
								cin >> n; 
								Playlist* p = new Playlist(); 
								p->SETnombre(n);
								listaplay.push_back(p);
							}else {
								
							}
							cout << "Playlist + cancion: " <<endl; 
							cout << "Listar Canciones: " <<endl; 
							cout << "Lista completa de canciones: " <<endl; 
							for (int c = 0; c < listacanciones.size();c++){
								Cancion* objeto = listacanciones [c]; 
								cout << c << ": " << objeto->GETnombre() <<endl; 
							}
							bool v = false; 
							int elem = 0;
							while (v == false){
								cout << "Ingrese el numero de cancion que desea. " <<endl;  
								cin >> elem; 
								if ((elem >= 0 && elem <= listacanciones.size() - 1)){
									v = true; 
								}else {
									cout << "Entradas no validas." <<endl; 
								}
							}//Fin del while que pide la cancion en el modulo 3. 	
							cout << "Listar Playlists: " <<endl; 
							cout << "Lista completa de Playlists: " <<endl; 
							for (int c = 0; c < listaplay.size();c++){
								Playlist* objeto = listaplay [c]; 
								cout << c << ": " << objeto->GETnombre() <<endl; 
							}	
							bool v2 = false; 
							int elem2 = 0;
							while (v2 == false){
								cout << "Ingrese el numero de playlist que desea. " <<endl;  
								cin >> elem2; 
								if ((elem2 >= 0 && elem2 <= listacanciones.size() - 1)){
									v = true; 
								}else {
									cout << "Entradas no validas." <<endl; 
								}
							}//Fin del while que pide la playlist en el modulo 3. 
							Cancion* canc = listacanciones [elem];	
							Playlist* play = listaplay [elem2]; 
							play->GETcanciones().push_back(canc); 
							cout << "Cancion agregada correctamente: ";
							break; 
							}//Fin del caso 1. 
						case 2:
							{
							cout << "Playlist + Album: " <<endl; 
							cout << "Listar Playlists: " <<endl; 
							cout << "Lista completa de Playlists: " <<endl; 
							for (int c = 0; c < listaplay.size();c++){
								Playlist* objeto = listaplay [c]; 
								cout << c << ": " << objeto->GETnombre() <<endl; 
							}	
							bool v2 = false; 
							int elem2 = 0;
							while (v2 == false){
								cout << "Ingrese el numero de playlist que desea. " <<endl;  
								cin >> elem2; 
								if ((elem2 >= 0 && elem2 <= listaplay.size() - 1)){
									v2 = true; 
								}else {
									cout << "Entradas no validas." <<endl; 
								}
							}//Fin del while que pide la playlist en el modulo 3. 
							cout << "Listar Albums: " <<endl; 
							cout << "Lista completa de Albums: " <<endl; 
							for (int c = 0; c < listaalbum.size();c++){
								Album* objeto = listaalbum [c]; 
								cout << c << ": " << objeto->GETnombre() <<endl; 
							}
							bool v = false; 
							int elem = 0;
							while (v == false){
								cout << "Ingrese el numero de cancion que desea. " <<endl;  
								cin >> elem; 
								if ((elem >= 0 && elem <= listaalbum.size() - 1)){
									v = true; 
								}else {
									cout << "Entradas no validas." <<endl; 
								}
							}//Fin del while que pide la cancion en el modulo 3. 
							Playlist* play = listaplay [elem2]; 
							Album* alb = listaalbum [elem]; 
							for (int c = 0; c < alb->GETcanciones().size();c++){
								Cancion* canc = alb->GETcanciones() [c]; 
								play->GETcanciones().push_back(canc); 
							}
							cout << "Album agregado correctamente. " <<endl;
							break; 
							}//Fin del caso 2. 
						case 3:
							{
							cout << "Album + Cancion: ";
							cout << "Ingrese si desea crear un Album: (s/n)" <<endl; 
							char resp; 
							cin >> resp; 
							if (resp == 's'){
								cout << "Ingrese el nombre del Album: " <<endl; 
								string n = ""; 
								cin >> n; 
								Album* p = new Album(); 
								p->SETnombre(n);
								listaalbum.push_back(p);
							}else {
								
							}	
							cout << "Listar Canciones: " <<endl; 
							cout << "Lista completa de canciones: " <<endl; 
							for (int c = 0; c < listacanciones.size();c++){
								Cancion* objeto = listacanciones [c]; 
								cout << c << ": " << objeto->GETnombre() <<endl; 
							}
							bool v = false; 
							int elem = 0;
							while (v == false){
								cout << "Ingrese el numero de cancion que desea. " <<endl;  
								cin >> elem; 
								if ((elem >= 0 && elem <= listacanciones.size() - 1)){
									v = true; 
								}else {
									cout << "Entradas no validas." <<endl; 
								}
							}//Fin del while que pide la cancion en el modulo 3. 	
							cout << "Listar Albums: " <<endl; 
							cout << "Lista completa de Albums: " <<endl; 
							for (int c = 0; c < listaalbum.size();c++){
								Album* objeto = listaalbum [c]; 
								cout << c << ": " << objeto->GETnombre() <<endl; 
							}
							v = false; 
							int elem2 = 0;
							while (v == false){
								cout << "Ingrese el numero de cancion que desea. " <<endl;  
								cin >> elem2; 
								if ((elem2 >= 0 && elem2 <= listaalbum.size() - 1)){
									v = true; 
								}else {
									cout << "Entradas no validas." <<endl; 
								}
							}//Fin del while que pide la cancion en el modulo 3. 
							Album* alb = listaalbum [elem2]; 
							Cancion* canc = listacanciones [elem];	
							alb->GETcanciones().push_back(canc);
							break; 
							}//Fin del caso 3. 
					}//Fin del switch de las funciones del modulo 3. 
				}//Fin del while que reinicia las funciones del modulo 3. 
				break; 
				}//Fin del caso 3.
		}//Fin del switch del programa. 
	}//Fin del while del programa. 
	
	
	
	
	
	
	
	
	
	return 0;
}//Fin del MAIN. 