//============================================================================
// Name        : A05MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

struct dades
{
	int codi;
	char nom[20];
	bool marcat_per_esborrar;
};

dades entrar_dades();
void escriure_esborrant(string nom_fitxer, int registres);
void esborrar_registres(string nom_fitxer);
void llegir_fitxers(string nom_fitxer);
void escriure_dades(dades dada);

int main() {

	string nom_f;
	int num_r;

	cout << "Introdueix el nom del fitxer" << endl;
	fflush(stdin);
	getline (cin, nom_f);

	cout << "Llegim els registres del fitxer" << endl;

	llegir_fitxers(nom_f);

	cout << "Introdueix el nombre de registres que vols escriure" << endl;
	cin >> num_r;

	escriure_esborrant(nom_f, num_r);

	cout << "Esborrem els registres marcats" << endl;

	esborrar_registres(nom_f);

	cout << "Llegim els registres del fitxer" << endl;

	llegir_fitxers(nom_f);

	return 0;
}

void escriure_esborrant(string nom_fitxer, int registres)
{
	ofstream fitxer(nom_fitxer.c_str());
	dades d1;

	if (fitxer.is_open())
		fitxer.close();



	fitxer.open(nom_fitxer.c_str(), ios::out | ios::binary);
	if (fitxer.is_open()) //si està obert
	{
		for(int i=0; i<registres; i++) //omplim diversos registres
		{
			d1=entrar_dades();
			fitxer.write((const char *)&d1,sizeof(d1)); //escrivim el registre
		}
	}
	fitxer.close();
}

dades entrar_dades()
{
	char marcar;
	dades dada;
	dada.marcat_per_esborrar = false;

	cout << "-------------" << endl;
	cout << "Introdueix el codi:" << endl;
	cin >> dada.codi;
	cout << "Introdueix el nom:" << endl;
	cin >> dada.nom;
	cout << "Vols que el registre s'esborri?" << endl;
		cout << "Pulsa 's', si sí. Pulsa 'n' si no:" << endl;
		cin >> marcar;

		if(marcar == 's')
		{
			dada.marcat_per_esborrar = true;
		}

	return dada;
}

void esborrar_registres(string nom_fitxer)
{
	fstream fitxer(nom_fitxer.c_str());
	dades d1;

	if(fitxer.is_open())
		fitxer.close();

	fitxer.open(nom_fitxer.c_str(), ios::in | ios::binary);

	if(fitxer.is_open())
	{
		fitxer.read((char *)&d1,sizeof(d1)); //llegim primer registre
		while(!fitxer.eof() and (d1.marcat_per_esborrar = true)) //mentre no final fitxer
		{
			d1.codi = 0;
			d1.nom = "";
			d1.marcat_per_esborrar = "";
		}
		fitxer.close();
	}
}

void llegir_fitxers(string nom_fitxer)
{
	fstream fitxer2(nom_fitxer.c_str());
	dades d1;

	if (fitxer2.is_open()) //si està obert
		fitxer2.close();

	fitxer2.open(nom_fitxer.c_str(),ios::in | ios::binary); //obrim per llegir

	if(fitxer2.is_open()) //si esta obert
	{
		fitxer2.read((char *)&d1,sizeof(d1)); //llegim primer registre
		while(!fitxer2.eof()) //mentre no final fitxer
		{
			escriure_dades(d1);
			fitxer2.read((char *)&d1,sizeof(d1)); //llegim registre
		}
		fitxer2.close();
	}
}

void escriure_dades(dades dada)
{
	cout << "Nom: " << dada.nom << endl;
	cout << "Codi: " << dada.codi << endl;
	cout << "Marcat per esborrar: " << dada.marcat_per_esborrar << endl;
	cout << "-------------" << endl;
}
