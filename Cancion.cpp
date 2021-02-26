#include <iostream>
#include <string>
#include "Cancion.hpp"

Cancion :: Cancion(){
	
}

Cancion :: Cancion(string n, string a, string d, Genero x){
	nombre = n; 
	artista = a; 
	duracion = d; 
	genero = x; 
}

string Cancion :: GETnombre(){
	return nombre; 
}

string Cancion :: GETartista(){
	return artista; 
}

string Cancion:: GETduracion(){
	return duracion; 
}

void Cancion :: SETnombre(string x){
	nombre = x; 
}

void Cancion :: SETartista(string x){
	artista = x; 
}

void Cancion :: SETduracion(string x){
	duracion = x; 
}