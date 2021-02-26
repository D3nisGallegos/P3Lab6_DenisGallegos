#include <iostream>
#include <string>
#include "Genero.hpp"

Genero :: Genero(){
	
}

Genero :: Genero(string x){
	nombre = x; 
}

void Genero :: SETnombre(string x){
	nombre = x;
} 

string Genero :: GETnombre(){
	return nombre; 
}