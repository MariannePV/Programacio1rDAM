//============================================================================
// Name        : UF3_02PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Es tracta d’una pràctica en la qual utilitzarem una estructura (ha de ser diferent per a cada alumne o, més ben dit, no
té per què coincidir). Així les pràctiques de cada persona seran diferents.
El mínim que ha de tenir el programa són les següents funcionalitats:
	1. (2 punts) Utilitzar funcions. Programació estructurada
	2. (2 punts) Que hi hagi com a mínim dos fitxers.
	3. (2 punts) Llistar tots els registres d’un determinat fixer
	4. (2 punts) Llistar un registre en concret per posició o pel seu contingut. Aquí podeu donar opcions del tipus
“llistar el registre de la posició X” o “llistar el registre amb DNI X” o llistar tots els registres amb un valor d’un
determinat camp més alt que X”.
Part opcional. Per tenir un 10
	(1 punt) Si voleu fer una primera ampliació, el programa pot tenir també la funcionalitat:
		5. Modificar un registre. (La millor opció és obrir el fitxer per escriure i llegir i llavors sobreescriure la posició
		desitjada)
	(1 punt) Si voleu fer una segona ampliació el programa pot fer:
		6. Baixes. Aquesta ampliació és més complicada perquè hauríem de traspassar el contingut del fitxer a una
		taula, eliminar el registre en qüestió i després escriure-ho al fitxer, però en aquest cas obrint el fitxer només
		per escriure (de manera que es carrega tot el que tenia el fitxer). Així el nou contingut del fitxer tindrà tot el
		que tenia excepte el registre que hem eliminat.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct videojocs
{
	char nom[20];
	char plataforma[20];
	int pegi;
	int any;
};

//NOM fitxers --> accio / aventura

void escriure_esborrant(string nom_fitxer, int registres); //Escriure en un fitxer binari, esborrant tots els registres anteriors
void escriure_al_final(string nom_fitxer, int registres);
void escriure_lloc_concret(string nom_fitxer, int posicio);
void llegir_fitxers(string nom_fitxer);
void llegir_element(string nom_fitxer, int posicio);
void comptar_registres(string nom_fitxer);
void modificar_dades(string nom_fitxer);

void escriure_videojoc(videojocs videojoc);
videojocs entrar_videojoc();

int menu();
void cos();

int main() {

	cos();
	cout << "Has sortit del programa";

	return 0;
}

int menu()
{
	int opcio;

	do{
		cout << "1. Escriure varïs registres, esborrant els anteriors" << endl;
		cout << "2. Escriure nous registres al final" << endl;
		cout << "3. Escriure en un espai en concret" << endl;
		cout << "4. Llegir un fitxer" << endl;
		cout << "5. Llegir un element en concret" << endl;
		cout << "6. Modificar les dades" << endl;
		cout << "7. Comptar el total de registres que hi ha" << endl;
		cout << "8. Sortir" << endl;
		cin >> opcio;
	}while(opcio < 1 or opcio > 8);

	return opcio;
}

void cos()
{
	bool sortir = false;
	string nom_f;
	int pos, num_r;

	do{
		switch(menu())
		{
		case 1:

			cout << "Introdueix el nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_f);

			cout << "Introdueix el nombre de registres que vols escriure" << endl;
			cin >> num_r;

			escriure_esborrant(nom_f, num_r);

			break;
		case 2:

			cout << "Introdueix el nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_f);

			cout << "Introdueix el nombre de registres que vols introduir" << endl;
			cin >> num_r;
			cout << endl;

			escriure_al_final(nom_f, num_r);

			break;
		case 3:

			cout << "Introdueix el nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_f);

			cout << "Introdueix en quina posició vols escriure-hi" << endl;
			cin >> pos;

			escriure_lloc_concret(nom_f, pos);

			break;
		case 4:

			cout << "Introdueix el nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_f);

			llegir_fitxers(nom_f);

			break;
		case 5:

			cout << "Introdueix el nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_f);

			cout << "Introdueix la posició que vols llegir" << endl;
			cin >> pos;
			cout << endl;

			llegir_element(nom_f, pos);

			break;
		case 6:

			cout << "Introdueix el nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_f);

			modificar_dades(nom_f);

			break;
		case 7:

			cout << "Introdueix el nom del fitxer" << endl;
			fflush(stdin);
			getline (cin, nom_f);

			comptar_registres(nom_f);

			break;
		case 8:

			sortir=true;
			break;
		}

	}while(!sortir);
}

void modificar_dades(string nom_fitxer)
{
	int pos;
	int pos1;
	videojocs v1;

	fstream fitxer(nom_fitxer.c_str());
	if (fitxer.is_open()) //si està obert
		fitxer.close();

	fitxer.open(nom_fitxer.c_str(),ios::in | ios::out | ios::binary ); //obrim fitxer per escriure i llegir
	cout << "Modificarem el fitxer en un lloc en concret" << endl;
	v1=entrar_videojoc();
	cout << "Escull la posició a modificar" << endl;
	cin >> pos;
	fitxer.seekg(0,ios::end); // col·loquem el punter al principi
	pos1= fitxer.tellg()/sizeof(v1);
	if(fitxer.is_open()and pos<=pos1-1)
	{
		fitxer.seekg((pos)*sizeof(v1),ios::beg); //ens posicionem al element i esborrem el que hi havia
		fitxer.write((const char *)&v1,sizeof(v1));
		fitxer.close();
		cout<<"El fitxer ha estat modifiact correctament"<<endl;
	}
	else //si està obert
	{
		cout<<"No s'ha trobat el fitxer"<<endl;
	}
}

void escriure_esborrant(string nom_fitxer, int registres)
{
	ofstream fitxer(nom_fitxer.c_str());
	videojocs v1;

	if (fitxer.is_open())
		fitxer.close();

	fitxer.open(nom_fitxer.c_str(), ios::out | ios::binary);
	if (fitxer.is_open()) //si està obert
	{
		for(int i=0; i<registres; i++) //omplim diversos registres
		{
			v1=entrar_videojoc();
			fitxer.write((const char *)&v1,sizeof(v1)); //escrivim el registre
		}
	}
	fitxer.close();
}

void escriure_al_final(string nom_fitxer, int registres)
{
	fstream fitxer(nom_fitxer.c_str());
	videojocs v1;

	if (fitxer.is_open())
		fitxer.close();

	fitxer.open(nom_fitxer.c_str(),ios::out | ios::app | ios::binary); //obrim fitxer per escriure

	if (fitxer.is_open()) //si està obert
	{
		for(int i=0; i<registres; i++) //omplim diversos registres
		{
			v1=entrar_videojoc();
			fitxer.write((const char *)&v1,sizeof(v1)); //escrivim el registre
		}
	}
	fitxer.close();
}

void escriure_lloc_concret(string nom_fitxer, int posicio)
{
	fstream fitxer(nom_fitxer.c_str());
	videojocs v1;

	if (fitxer.is_open())
		fitxer.close();

	fitxer.open(nom_fitxer.c_str(),ios::in | ios::out | ios::binary ); //obrim fitxer per escriure i llegir

	cout << "Afegirem el registre dins la posició indicada: " << endl;
	v1=entrar_videojoc();

	if (fitxer.is_open()) //si està obert
	{
		fitxer.seekg((posicio)*sizeof(v1),ios::beg); //ens posicionem al element, ens carreguem el que hi havia
		fitxer.write((const char *)&v1,sizeof(v1));
		fitxer.close();
	}
}

void llegir_fitxers(string nom_fitxer)
{
	fstream fitxer2(nom_fitxer.c_str());
	videojocs v1;

	if (fitxer2.is_open()) //si està obert
		fitxer2.close();

	fitxer2.open(nom_fitxer.c_str(),ios::in | ios::binary); //obrim per llegir

	if(fitxer2.is_open()) //si esta obert
	{
		fitxer2.read((char *)&v1,sizeof(v1)); //llegim primer registre
		while(!fitxer2.eof()) //mentre no final fitxer
		{
			escriure_videojoc(v1);
			fitxer2.read((char *)&v1,sizeof(v1)); //llegim registre
		}
		fitxer2.close();
	}
}

void llegir_element(string nom_fitxer, int posicio)
{
	fstream fitxer(nom_fitxer.c_str());
	videojocs v1;

	if (fitxer.is_open()) //si està obert
		fitxer.close();

	fitxer.open(nom_fitxer.c_str(),ios::in | ios::binary); //obrim per llegir

	if(fitxer.is_open()) //si esta obert
	{
		fitxer.seekg((posicio)*sizeof(v1),ios::beg); //beg: des del princip, cur:des de pos actual, end:des del final
		fitxer.read((char *)&v1,sizeof(v1));

		cout << "Estem llegint la posició " << posicio << " , del fitxer " << nom_fitxer << ":" << endl;
		escriure_videojoc(v1);

		fitxer.close();
	}
}




void comptar_registres(string nom_fitxer)
{
	fstream fitxer(nom_fitxer.c_str());
	videojocs v1;

	if (fitxer.is_open()) //si està obert
		fitxer.close();

	fitxer.open(nom_fitxer.c_str(),ios::in | ios::binary); //obrim per llegir

	if(fitxer.is_open()) //si esta obert
	{
		fitxer.seekg(0,ios::end); // col·loquem el punter al principi
			cout << "Nombre total de registres del fitxer " << nom_fitxer << ": " << fitxer.tellg()/sizeof(v1) << endl; //dividim el que ocupen tots els registres per la mida de cada registre
	}
}

void escriure_videojoc(videojocs videojoc)
{
	cout << "Nom: " << videojoc.nom << endl;
	cout << "Plataforma: " << videojoc.plataforma << endl;
	cout << "PEGI: " << videojoc.pegi << endl;
	cout << "Any de llançament: " << videojoc.any << endl;
	cout << "-------------" << endl;
}

videojocs entrar_videojoc()
{
	cout << "-------------" << endl;
	videojocs videojoc;
		cout << "Introdueix el nom:" << endl;
		cin >> videojoc.nom;
		cout << "Introdueix la plataforma:" << endl;
		cin >> videojoc.plataforma;
		cout << "Introdueix el PEGI:" << endl;
		cin >> videojoc.pegi;
		cout << "Introdueix l'any de llançament:" << endl;
		cin >> videojoc.any;
	return videojoc;
}
