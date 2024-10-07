//============================================================================
// Name        : 12PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

/*
Recordeu el programa que vàrem fer sobre altes, baixes, modificacions i consultes en
una taula? (09PR09)

Ara feu un copy paste de tot aquell codi i adapteu-lo de manera que la taula sigui de
tipus Client.

El tipus Client tindrà els següents camps NIF (string) , nom (string), saldo (enter),
posicio_ocupada (booleà).

Heu de tenir en compte el següent:
	- El camp booleà ens indica si aquella posició és buida o no
	- No podem tenir dos clients amb el mateix NIF
	- Les cerques han de permetre cercar per NIF, nom i saldo mínim. Si es fa la cerca
	per NIF en el moment que el trobi mostrem les dades i si les cerques es fan per
	nom o saldo mostrarem les dades de totes les persones que tenen aquest nom
	o un saldo superior o igual a l’entrat. També ha de permetre fer un llistat de
	tots els clients.
	- A les modificacions només podem modificar saldo o nom
	- A les baixes nomes podem donar de baixa a partir del NIF
Penseu que a més del menú principal haureu de tenir submenús un cop entri a l’opció
del menú en concret.

Per exemple, quan s’entri al menú de consultes haurà d’aparèixer un menú que digui:
	1. Cercar per NIF
	2. Cercar per nom
	3. Cercar per saldo mínim
	4. Tornar al menú principal
*/

struct client
	{
		string dni;
		string nom;
		int saldo;
		bool ocupat;
	};

int main() {

	client aux;
	client taula[MAX];
	int i, opcio;
	bool trobat, sortir, tornar, entrat;

	sortir = false;

	for(i=0;i<MAX;i++)
		taula[i].ocupat = false;

	do
	{


		cout << "Tria una opció" << endl;
		cout << "1. Altes" << endl;
		cout << "2. Baixes" << endl;
		cout << "3. Modificacions" << endl;
		cout << "4. Consultes" << endl;
		cout << "5. Sortir" << endl;
		cin >> opcio;

		switch (opcio)
		{
		case 1:
			cout << "Introdueix el DNI del client" <<  endl;
			cin >> aux.dni;

			i=0;
			trobat = false;

			while(i<MAX and !trobat)
			{
				if (taula[i].dni == aux.dni and taula[i].ocupat)
					trobat = true;
				else
					i++;
			}

			if (trobat)
			{
				cout << "No es pot donar d'alta aquest DNI, el client ja existeix" << endl;
			}
			else // no tenim cap DNI igual dins la taula
			{
				i=0;
				trobat = false;

				while(i<MAX and !trobat)
				{
					if (!taula[i].ocupat)
						trobat = true;
					else
						i++;
				}
				if (trobat)
				{
					cout << "Introdueix el teu nom" << endl;
					cin >> aux.nom;
					cout << "Introdueix el teu saldo" << endl;
					cin >> aux.saldo;
					aux.ocupat = true;
					taula[i] = aux;

					cout << "Client donat d'alta" << endl;
				}
				else
					cout << "No hi ha cap posició disponible" << endl;
			}

			break;
		case 2:
			cout << "Introdueix el DNI del client per fer la baixa" <<  endl;
			cin >> aux.dni;

			i=0;
			trobat = false;

			while(i<MAX and !trobat)
			{
				if (taula[i].dni == aux.dni and taula[i].ocupat)
					trobat = true;
				else
					i++;
			}

			if (trobat) // es pot fer la baixa
				taula[i].ocupat = false;
			else
				cout << "Client no trobat" << endl;

			break;
		case 3:
			cout << "Introdueix el DNI del client per fer la modificació" <<  endl;
			cin >> aux.dni;

			i=0;
			trobat = false;

			while(i<MAX and !trobat)
			{
				if (taula[i].dni == aux.dni and taula[i].ocupat)
					trobat = true;
				else
					i++;
			}

			if (trobat)
			{
				cout << "Insereix el nom nou" << endl;
				cin >> aux.nom;
				cout << "Insereix el saldo nou" << endl;
				cin >> aux.saldo;
				taula[i]= aux;
			}
			else
				cout << "Client no trobat" << endl;

			break;
		case 4:
			do
			{
				cout << "0. Mostrar tots els clients"<< endl;
				cout << "1. Cercar per DNI" << endl;
				cout << "2. Cercar per nom" << endl;
				cout << "3. Cercar per saldo mínim" << endl;
				cout << "4. Tornar al menú prinicipal" << endl;
				cin >> opcio;

				tornar = false;

				switch (opcio)
				{
				case 0:
					for(i=0;i<MAX;i++)
					{
						if(taula[i].ocupat)
						{
							cout << "------------------------" << endl;
							cout << taula[i].dni << endl;
							cout << taula[i].nom << endl;
							cout << taula[i].saldo << endl;
						}
					}

					break;
				case 1:
					cout << "Introdueix el DNI del client" <<  endl;
					cin >> aux.dni;

					i=0;
					trobat = false;

					while(i<MAX and !trobat)
					{
						if (taula[i].dni == aux.dni and taula[i].ocupat)
							trobat = true;
						else
							i++;
					}

					if (trobat)
					{
						cout << "Les dades del client són:" << endl;
						cout << taula[i].dni << endl;
						cout << taula[i].nom << endl;
						cout << taula[i].saldo << endl;

					}
					else
						cout << "Client no trobat" << endl;

					break;
				case 2:
					cout << "Introdueix el nom del client" <<  endl;
					cin >> aux.nom;

					i=0;
					trobat = false;
					entrat = false;

					for (i=0; i<MAX; i++)
					{
						if (taula[i].nom == aux.nom and taula[i].ocupat)
						{
							entrat = true;

							cout << "Les dades del client són:" << endl;
							cout << taula[i].dni << endl;
							cout << taula[i].nom << endl;
							cout << taula[i].saldo << endl;
						}

					}

					if (!entrat)
					{
						cout << "No hi ha cap client amb aquestes característiques" << endl;
					}

					break;
				case 3:
					cout << "Introdueix el saldo mínim" <<  endl;
					cin >> aux.saldo;

					i=0;
					trobat = false;
					entrat = false;

					for (i=0; i<MAX; i++)
					{
						if (taula[i].saldo >= aux.saldo and taula[i].ocupat)
						{
						entrat = true;

						cout << "Les dades del client són:" << endl;
						cout << taula[i].dni << endl;
						cout << taula[i].nom << endl;
						cout << taula[i].saldo << endl;
						}
					}

					if (!entrat)
					{
						cout << "No hi ha cap client amb aquestes característiques" << endl;
					}

					break;
				case 4:
					tornar = true;

					break;
				}

			}while(!tornar);

			break;
		case 5:
			sortir = true;

			break;
		}

	}while (!sortir);

	cout << "Has sortit del programa" << endl;

	return 0;
}

