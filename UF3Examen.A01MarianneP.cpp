//============================================================================
// Name        : A01MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

bool buscar_linia(string nom_fitxer, string valor);

int main() {

	return 0;
}

bool buscar_linia(string nom_fitxer, string valor) //valor = linia que estem buscant
{
	bool trobat = false;
	int comptador = 0;

	ifstream fitxer(nom_fitxer.c_str());
	string linia;

	if(fitxer.is_open())
		fitxer.close();

	fitxer.open(nom_fitxer.c_str(), ios::in); //Obrim el fitxer per llegir

	if(fitxer.is_open())
	{
		do
		{
			getline(fitxer, linia); //Llegim linia per linia el fitxer, i les guardem dins la variable linia
			if(linia == valor)
			{
				comptador++; //Per cada cop que corresponguin, sumem 1 al comptador
			}
			if(comptador >= 2)
			{
				trobat = true; //Si el comptador és més gran o igual que dos, trobat=true, per tant sortirem del bucle
			}
		}	while(!fitxer.eof() and !trobat);
		fitxer.close();
	}

	return trobat;
}


