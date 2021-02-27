#include <iostream>
#include <string>
#include <vector>
#include "Cancion.hpp"

class Album{
	
	private: 
	string nombre; 
	string artista;
	vector <Cancion*> canciones; 
	
	public: 
	Album();
	Album(string, string);
	void SETnombre(string);
	void SETcanciones(vector <Cancion*> );  
	void SETartista(string);
	string GETnombre();
    vector <Cancion*> GETcanciones();
    string GETartista();
 	void operator + (Cancion*);
	
};