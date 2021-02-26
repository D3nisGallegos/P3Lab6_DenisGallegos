#include <iostream>
#include <string>
#include <vector>
#include "Genero.hpp"
#pragma once

using namespace std; 

class Cancion{
	
	private : 
	string nombre; 
	string artista;
	string duracion; 
 	Genero genero; 
 	
 	public:
 	Cancion();
 	Cancion(string, string, string, Genero);
 	string GETnombre();
	void SETnombre(string);
	string GETartista();
	void SETartista(string); 
	string GETduracion();
	void SETduracion(string);
	Genero GETgenero();
	void SETgenero(Genero);
};