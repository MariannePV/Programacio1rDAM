//============================================================================
// Name        : 000_fitxerstext.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	string nom_de_fitxer_al_disc;
	string linia;
	int numero;
	char c;

	nom_de_fitxer_al_disc = "prova.txt";

	//declarem un fitxer que es diu fitxer al programa i prova.txt al disc dur
	// convertim el string nom_de_fitxer_al_disc a cadena de caràcters amb el mètode c_str()
	//ifstream (input o lectura)	ofstream (output o escriptura)		fstream (input/output)

	fstream fitxer(nom_de_fitxer_al_disc.c_str()); //Estem declarant el fitxer amb el nom 'fitxer'



	if (fitxer.is_open()) //Si el fitxer està obert
	{
		fitxer.close(); //Tanquem el fitxer
	}

//*********************************************************************************************
//ESCRIURE EN UN FITXER DE TEXT
//*********************************************************************************************

	/* modes obertura

		ios::in		llegir
		ios::out	escriure	Esborra TOT el que conté el fitxer i escriu
		ios::in | ios::out		Llegir i escriure. Esborra tot el que conté el fitxer si escrivim
		ios::out | ios::app		Serveix per escriure al final del fitxer. No esborra el que conté el fitxer
	 */

////////////////////////Escriure i esborrar el que hi hagi////////////////////////

	fitxer.open(nom_de_fitxer_al_disc.c_str(), ios::out); //Obrim per escriure

	linia = "hola que tal";
	numero = 55;

	if(fitxer.is_open())
	{
		fitxer << linia << endl; //Escrivim la variable string
		fitxer << "Coca-Cola" << numero << endl; //Escrivim text i numero
		fitxer.close(); //Tanquem fitxer
	}

////////////////////////Afegir coses al final d'un fitxer de text////////////////////////

	fitxer.open(nom_de_fitxer_al_disc.c_str(), ios::app); // Fem app perquè si no ho posem esborraria el contingut del fitxer

	if(fitxer.is_open())
	{
		fitxer << "Text afegir al final" << endl;
		fitxer.close();
	}

//*********************************************************************************************
//LLEGIR EN UN FITXER DE TEXT
//*********************************************************************************************

	if(fitxer.is_open()) //Si el fitxer està obert
	{
		fitxer.close(); //Tanquem el fitxer
	}
//////////////////////// LLEGIR LINIA PER LINIA////////////////////////

	fitxer.open(nom_de_fitxer_al_disc.c_str(), ios::in); //Obrim per llegir

	if(fitxer.is_open())
	{
		do{
			getline(fitxer, linia); //anem llegint linia per linia i ho guardem a linia
			cout << linia << endl; //escrivim el que hem llegit

		} while(!fitxer.eof()); //While el fitxer no arribi al final

		fitxer.close();
	}

//////////////////////// LLEGIR CARÀCTER PER CARÀCTER////////////////////////

	fitxer.open(nom_de_fitxer_al_disc.c_str(), ios::in); //Obrim per llegir

	if(fitxer.is_open())
	{
		do{
			c = fitxer.get(); //Anem llegint linia per linia i ho guardem a c
			cout << c; //Escrivim el que hem llegit

		} while(!fitxer.eof()); //While el fitxer no arribi al final

		fitxer.close();
	}

	return 0;
}
