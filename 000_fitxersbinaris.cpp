//============================================================================
// Name        : 000_fitxersbinaris.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct persona //estructura per guardar-hi les dades
	{
		int codi;
		char nom[20];
	};

void escriure_persona(persona persona);
persona entrar_persona();

int main() {

	persona p1;

	string nom_de_fitxer_al_disc="prova1.dat";
	int posicio;

	// ifstream (input o lectura) ofstream (output o escriptura) fstream (input/output)

	fstream fitxer(nom_de_fitxer_al_disc.c_str()); //declaració

	if (fitxer.is_open()) //si està obert el tanquem
		fitxer.close();

	///////////////////// escriure en un fitxer binari molts registres /////////////////////////////
		/* modes obertura
		* ios::out | ios::binary per escriure
		* ios::in | ios::binary per llegir
		* ios::in | ios::out | ios::binary per escriure i llegir
		* ios::out | ios::app | ios::binary per afegir al final
		*/

	fitxer.open(nom_de_fitxer_al_disc.c_str(),ios::out | ios::binary);
	if (fitxer.is_open()) //si està obert
	{
		for(int i=0; i<5; i++) //omplim diversos registres
		{
			p1=entrar_persona();
			fitxer.write((const char *)&p1,sizeof(p1)); //escrivim el registre
		}
	}
	fitxer.close();

	///////////////////// afegir informació al final /////////////////////////////////////////////

	fitxer.open(nom_de_fitxer_al_disc.c_str(),ios::out | ios::app | ios::binary); //obrim fitxer per escriure

	cout << "afegirem un registre al final: " << endl;
	p1=entrar_persona();

	if (fitxer.is_open()) //si està obert
	{
		fitxer.write((const char *)&p1,sizeof(p1)); //escrivim el registre
		fitxer.close();
	}

	///////////////////// afegir informació en un lloc concret /////////////////////////////////////////////

	fitxer.open(nom_de_fitxer_al_disc.c_str(),ios::in | ios::out | ios::binary ); //obrim fitxer per escriure i llegir

	cout << "afegirem un registre en un lloc concret: " << endl;
	p1=entrar_persona();

	cout << "\n Ara tria el lloc on inserir a partir del zero" << endl;
	cin >> posicio;

	if (fitxer.is_open()) //si està obert
	{
		fitxer.seekg((posicio)*sizeof(p1),ios::beg); //ens posicionem al element, ens carreguem el que hi havia
		fitxer.write((const char *)&p1,sizeof(p1));
		fitxer.close();
	}

	//////////////////// llegir d'un fitxer binari tots els registres /////////////////////////////

	fstream fitxer2(nom_de_fitxer_al_disc.c_str());
	if (fitxer2.is_open()) //si està obert
		fitxer2.close();

	fitxer2.open(nom_de_fitxer_al_disc.c_str(),ios::in | ios::binary); //obrim per llegir

	if(fitxer2.is_open()) //si esta obert
	{
		fitxer2.read((char *)&p1,sizeof(p1)); //llegim primer registre
		while(!fitxer2.eof()) //mentre no final fitxer
		{
			escriure_persona(p1);
			fitxer2.read((char *)&p1,sizeof(p1)); //llegim registre
		}
		fitxer2.close();
	}

	//////////// llegir un element concret, en aquest cas a la posició que entrem a posicio: 0,1,2,3,4 /////////////////////

	fitxer.open(nom_de_fitxer_al_disc.c_str(),ios::in | ios::binary); //obrim per llegir

	cout << "\n Ara tria el lloc al qual vols accedir " << endl;
	cin >> posicio;

	if(fitxer.is_open()) //si esta obert
	{
		fitxer.seekg((posicio)*sizeof(p1),ios::beg); //beg: des del princip, cur:des de pos actual, end:des del final
		fitxer.read((char *)&p1,sizeof(p1));

		cout << "hem llegit directament la " << posicio << " element: " << endl;
		escriure_persona(p1);

		fitxer.close();
	}

	//////////// saber el nombre de registres que hi ha. /////////////

	fitxer.open(nom_de_fitxer_al_disc.c_str(),ios::in | ios::binary); //obrim per llegir

	if(fitxer.is_open()) //si esta obert
	{
		fitxer.seekg(0,ios::end); // col·loquem el punter al principi
			cout << "Nombre registres: " << fitxer.tellg()/sizeof(p1) << endl; //dividim el que ocupen tots els registres per la mida de cada registre
	}

	return 0;
}

	/////////////////////////////////// funcio per escriure una persona ////////////////////
	void escriure_persona(persona persona)
	{
		cout << "codi: " << persona.codi << endl;
		cout << "nom: " << persona.nom << endl;
		cout << "-------------" << endl;
	}
	//////////////////////////////////////// Funció per entrar una persona ////////////////////////////////
	persona entrar_persona()
	{
		persona persona;
			cout << "entra el codi " << endl;
			cin >> persona.codi;
			cout << "entra el nom" << endl;
			cin >> persona.nom;
		return persona;
	}
