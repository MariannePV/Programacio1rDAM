//============================================================================
// Name        : 09PR09.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

/*
Arrays09 Feu un programa per a nombres naturals (enters positius majors que zero) amb el qual es puguin
fer altes, baixes, modificacions i consultes en un array. Primerament haureu d’inicialitzar tot l’array amb
zeros.
Quan feu l’alta d’un nombre sempre es farà en la primera posició lliure trobada (la primera posició que tingui
un zero), per fer una baixa es demanarà el nombre que volem donar de baixa i posarà un zero en totes les
posicions on es trobi aquest nombre. Les modificacions voldrà dir que ens demanarà quin nombre volem
canviar per quin i els substituirà tots i les consultes és demanar un nombre a l’usuari i ens diu totes les
posicions on es troba aquest nombre.
*/

int main() {

	int taula[MAX];
	int i, nombre, opcio, nombre2;
	bool sortir, apte; // és apte si té un 0

	sortir = false;

	cout << "Taula inicial: " << endl;
	for (i=0; i<MAX; i++)
	{
		taula[i]=0;
		cout << taula[i] << " ";
	}

	do
	{

		cout << endl << "Taula actual: " << endl;
		for (i=0; i<MAX; i++)
		{
			cout << taula[i] << " ";
		}

		cout << endl << endl << "Tria una opció" << endl;
		cout << "1. Altes" << endl;
		cout << "2. Baixes" << endl;
		cout << "3. Modificacions" << endl;
		cout << "4. Consultes" << endl;
		cout << "5. Sortir" << endl;
		cin >> opcio;

		switch (opcio)
		{
		case 1:
			do
			{
				cout << "Introdueix un nombre major que 0 per a fer l'alta" <<  endl;
				cin >> nombre;
			}	while(nombre <= 0);

			i=0;
			apte = false;

			while(i<MAX and !apte)
			{
				if (taula[i] == 0)
					apte = true;
				else
					i++;
			}

			if (apte)
			{
				taula[i] = nombre;
			}
			else
				cout << "No queden espais lliures" << endl;

			break;
		case 2:
			do
			{
				cout << "Introdueix un nombre major que 0 per a fer la baixa" <<  endl;
				cin >> nombre;
			}	while(nombre <= 0);

			apte = false;

			for (i=0; i<MAX; i++)
			{
				if (taula[i] == nombre)
				{
					taula[i] = 0;
					apte = true;
					cout << "Element esborrat a la posició " << i << endl;
				}
			}

			if (!apte)
				cout << "El nombre no és vàlid" << endl;

			break;
		case 3:
			do
			{
				cout << "Introdueix un nombre major que 0 per a fer la modificació" <<  endl;
				cin >> nombre;
				cout << "Introdueix un altre nombre per cambiar-lo per l'anterior" << endl;
				cin >> nombre2;
			}	while(nombre <= 0 and nombre2 <=0);

			apte = false;

			for (i=0; i<MAX; i++)
			{
				if (taula[i] == nombre)
				{
					apte = true;
					taula[i] = nombre2;
					cout << "Element modificat a la posició " << i << endl;
				}
			}

			if (!apte)
				cout << "Nombre no vàlid" << endl;

			break;
		case 4:
			do
			{
				cout << "Introdueix un nombre major que 0 per a fer la consulta" <<  endl;
				cin >> nombre;
			}	while(nombre <= 0);

			apte = false;

			for (i=0; i<MAX; i++)
			{
				if (taula[i] == nombre)
				{
					cout << "El nombre consultat (" << taula[i] << ") " << "es troba a l'espai " << i << " de la taula" << endl;
					apte = true;
				}
			}

			if (!apte)
				cout << "Nombre no vàlid" << endl;

			break;
		case 5:
			sortir = true;
			break;
		}

	}	while (!sortir);

	cout << "Has sortit del programa" << endl;

	return 0;
}
