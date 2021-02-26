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
											}//Fin del while que pide generos. 
											cout << "Lista total de generos: " <<endl; 
											for (int c = 0; c < listageneros.size();c++){
												Genero* objeto = listageneros [c]; 
												cout << c << ": " << objeto->GETnombre() <<endl; 
											}
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
												listacanciones.push_back(can);
												v = true; 
												cout << "Posicion invalida. "<<endl;
											}
										}//Fin del while que pide el genero. 
										cout << "Cancion agregada correctamente. " <<endl; 
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
							cout << "Listar Playlists: " <<endl; 
							cout << "Lista completa de Playlists: " <<endl; 
							for (int c = 0; c < listaplay.size();c++){
								Playlist* objeto = listaplay [c]; 
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
				cout << "Sobreescribir el operador: * " <<endl; 
				
				break; 	
				}//Fin del caso 2. 
		}//Fin del switch del programa. 
	}//Fin del while del programa. 
	
	
	
	
	
	
	
	
	
	return 0;
}//Fin del MAIN. 