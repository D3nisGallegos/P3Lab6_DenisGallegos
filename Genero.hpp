#include <iostream>
#include <string>
#pragma once

using namespace std; 

class Genero{
	
	private: 
	string nombre; 
	
	public: 
	Genero();
	Genero(string);
	
	string GETnombre();
	void SETnombre(string); 
	
	
};