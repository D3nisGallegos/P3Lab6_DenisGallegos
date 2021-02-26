#include <iostream>
#include <string>
#include <vector>
#include "Cancion.hpp"
#pragma once

using namespace std; 

class Playlist{
	
	private:
	string nombre; 
	vector <Cancion*> canciones; 
	
	public: 
	Playlist(); 
	Playlist(string);
	void SETnombre(string);
	void SETcanciones(vector <Cancion*>); 
	vector <Cancion*> GETcanciones();
	string GETnombre();
	 
};