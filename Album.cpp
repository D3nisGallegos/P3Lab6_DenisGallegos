#include <iostream>
#include <string>
#include <vector>
#include "Album.hpp"

Album :: Album(){
	
}

Album :: Album(string n, string a){
	nombre = n; 
	artista = a; 
}

void Album :: SETartista(string x){
	artista = x; 
}

void Album :: SETnombre(string x){
	nombre = x; 
}

void Album :: SETcanciones(vector <Cancion*> x){
	canciones = x; 
}

string Album :: GETnombre(){
	return nombre; 
}

string Album :: GETartista(){
	return artista; 
}

vector <Cancion*> Album :: GETcanciones(){
	return canciones; 
}