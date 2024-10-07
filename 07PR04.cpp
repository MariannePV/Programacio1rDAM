//============================================================================
// Name        : 07PR04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*Feu un programa que mostri tots els números senars o parells (a partir d’una opció que triï l’usuari) fins el
valor que demani l’usuari. El programa ha de controlar tota l’estona que s’entri un valor enter 0 i 2. Per
exemple si trio “Mostrar n senars” i entro 5 i 10 ha de mostrar Els senars entre aquests dos nombres són:
5,7,9*/

int main() {

	int nombre1, nombre2, opcio;
	bool sortir;

	sortir = false;

	do {
		cout << "Tria una opció" << endl;

		cout << "1. Mostrar n senars" << endl;
		cout << "2. Mostrar n parells" << endl;
		cout << "0. Sortir del programa" << endl;

		cin >> opcio;

		switch (opcio) {
		case 1:
			cout << "Introdueix els nombres en que vols que mostrem els senars que hi ha entre ells" << endl;
			cin >> nombre1;
			cin >> nombre2;

			for (; nombre1<nombre2 ; nombre1++) {
				if (nombre1 % 2 != 0)
					cout << nombre1 << ", ";
			}
			break;
		case 2:
			cout << "Introdueix els nombres en que vols que mostrem els parells que hi ha entre ells" << endl;
			cin >> nombre1;
			cin >> nombre2;

			for (; nombre1<nombre2 ; nombre1++) {
				if (nombre1 % 2 == 0)
					cout << nombre1 << ", ";
			}
			break;
		case 0:
			sortir = true;
			break;
		default:
			cout << "Valor no acceptat" << endl;
		}

	}	while (!sortir);

	cout << "Has sortit del programa";


	return 0;
}
