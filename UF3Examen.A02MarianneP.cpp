//============================================================================
// Name        : A02MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int vegades_caracter(string nom_fitxer, char caracter);

int main() {

	return 0;
}

int vegades_caracter(string nom_fitxer, char caracter)
{
	int comptador = 0;

	ifstream fitxer(nom_fitxer.c_str());
	char c;

	if(fitxer.is_open())
		fitxer.close();

	fitxer.open(nom_fitxer.c_str(), ios::in); //Obrim el fitxer per llegir

	if(fitxer.is_open())
	{
		do
		{
			c = fitxer.get();
			if(c == caracter)
			{
				comptador ++;
			}
		}	while(!fitxer.eof());
		fitxer.close();
	}

	return comptador;
}
