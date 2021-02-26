#include <iostream>
#include <string>
#include <vector>
#include "Playlist.hpp"

Playlist :: Playlist(){
	
}

Playlist :: Playlist(string x){
	nombre = x; 
}

void Playlist :: SETnombre(string x){
	nombre = x; 
}

void Playlist :: SETcanciones(vector <Cancion*> x){
	canciones = x; 
}

string Playlist :: GETnombre(){
	return nombre; 
}

vector <Cancion*> Playlist :: GETcanciones(){
	return canciones;
}