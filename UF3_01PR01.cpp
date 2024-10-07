//============================================================================
// Name        : UF3_01PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Heu de fer un programa que treballi amb un o més fitxers de text. L’activitat és
totalment lliure.

Es valoraran els següents items:

(imprescindible) Ha d’estar feta per vosaltres al 100% i en el moment de lliurar-la
saber explicar bé el que s’ha fet. Tenir clar el codi.

Els items a valorar són:

(2 punts) Estructura general del programa (tot fet amb funcions).
(2 punts) Hi ha alguna cerca en un fitxer
(2 punts) Hi ha algun recorregut en un fitxer
(2 punts) Utilitza més d’un fitxer fitxers
(2 punts) Utilitza algun menú

Altres aspectes que es poden portar a terme
Utilitza lectura caràcter per caràcter per alguna cosa
Alguna innovació del tipus (separador de camps, codificacions, etc)
Utilitza alguna funció no vista a classe, perquè s’ha investigat
*/

#include <iostream>
#include <fstream>
using namespace std;

int borrar_fitxer(string nom_fitxer);
void buidar_fitxer(string nom_fitxer);
void escriure_fitxer(string nom_fitxer, string valor);
void llegir_fitxer(string nom_fitxer);
int renombrar_fitxer(string nom_fitxer, string nou_nom_fitxer);
bool cercar_valor(string nom_fitxer, string valor);

int menu();
void cos();

int main() {

	//llibreria --> terror, romance, aventura, acció

	cos();
	cout << "Has sortit de la llibreria";
	return 0;
}

int menu()
{
	int opcio;

	do{
		cout << "1. Escriure dins un fitxer" << endl;
		cout << "2. Llegir un fitxer" << endl;
		cout << "3. Cercar informació dins un fitxer" << endl;
		cout << "4. Buidar un fitxer" << endl;
		cout << "5. Renombrar un fitxer" << endl;
		cout << "6. Esborrar un fitxer" << endl;
		cout << "7. Sortir"<< endl;
		cin >> opcio;
	}while(opcio < 1 or opcio > 7);

	return opcio;
}

void cos()
{
	bool sortir = false;
	string nom_f;
	string valor;
	string nom_nou;

	do{
		switch(menu())
		{
		case 1:
			cout << "Introdueix el nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_f);

			cout << "Introdueix allò que vols escriure dins el fitxer" << endl;
			fflush(stdin);
			getline (cin, valor);

			escriure_fitxer(nom_f, valor);

			break;
		case 2:
			cout << "Introdueix el nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_f);

			llegir_fitxer(nom_f);

			break;
		case 3:
			cout << "Introdueix el nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_f);

			cout << "Introdueix allò que vols cercar dins el fitxer" << endl;
			fflush(stdin);
			getline (cin, valor);

			if(cercar_valor(nom_f, valor))
				cout << "Valor trobat dins el fitxer" << endl;
			else
				cout << "Valor no trobat dins el fitxer" << endl;

			break;
		case 4:
			cout << "Introdueix el nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_f);

			buidar_fitxer(nom_f);

			break;
		case 5:
			cout << "Introdueix el nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_f);

			cout << "Introdueix el nou nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_nou);

			if(renombrar_fitxer(nom_f, nom_nou))
				cout << "El fitxer ha canviat de nom" << endl;
			else
				cout << "Hi ha hagut un error" << endl;

			break;
		case 6:
			cout << "Introdueix el nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_f);

			if(borrar_fitxer(nom_f))
				cout << "Fitxer esborrat" << endl;
			else
				cout << "Hi ha hagut un error" << endl;

			break;
		case 7:
			sortir = true;

			break;
		}

	}while(!sortir);
}

void escriure_fitxer(string nom_fitxer, string valor)
{
	fstream fitxer(nom_fitxer.c_str());

	if(fitxer.is_open())
			fitxer.close();

	fitxer.open(nom_fitxer.c_str(), ios::app); // Fem app perquè si no ho posem esborraria el contingut del fitxer

	if(fitxer.is_open())
	{
		fitxer << valor << endl;
		fitxer.close();
	}
}

void llegir_fitxer(string nom_fitxer)
{
	ifstream fitxer(nom_fitxer.c_str());
	string linia;

	if(fitxer.is_open())
		fitxer.close();

	fitxer.open(nom_fitxer.c_str(), ios::in); //Obrim per llegir

	if(fitxer.is_open())
	{
		do{
			getline(fitxer, linia); //anem llegint linia per linia i ho guardem a linia
			cout << linia << endl; //escrivim el que hem llegit

		} while(!fitxer.eof()); //While el fitxer no arribi al final



		fitxer.close();
	}
}

bool cercar_valor(string nom_fitxer, string valor)
{
	bool trobat=false;
	ifstream fitxer(nom_fitxer.c_str());
	string linia;

	if(fitxer.is_open())
		fitxer.close();

	fitxer.open(nom_fitxer.c_str(), ios::in); //Obrim per llegir

	if(fitxer.is_open())
	{
		do{
			getline(fitxer, linia); //anem llegint linia per linia i instaladorho guardem a linia
			if(linia == valor)
					trobat = true;

		} while(!fitxer.eof()and !trobat); //While el fitxer no arribi al final

		fitxer.close();
	}

	return trobat;
}

void buidar_fitxer(string nom_fitxer)
{
	fstream fitxer(nom_fitxer.c_str());

	if(fitxer.is_open())
		fitxer.close();

	fitxer.open(nom_fitxer.c_str(), ios::out);

	if (fitxer.is_open())
	{
		fitxer.close();
	}
}

int borrar_fitxer(string nom_fitxer)
{
	fstream fitxer(nom_fitxer.c_str());
	int status;

	if(fitxer.is_open())
		fitxer.close();

	status = remove("fitxer");

	return status;
}

int renombrar_fitxer(string nom_fitxer, string nou_nom_fitxer)
{
	fstream fitxer(nom_fitxer.c_str());
	int resultat;

	if(fitxer.is_open())
		fitxer.close();

	resultat = rename("nom_fitxer", "nou_nom_fitxer");

	return resultat;
}
