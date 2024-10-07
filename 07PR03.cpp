//============================================================================
// Name        : 07PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*Recordeu el programa que vam fer per sumar, restar, multiplicar i dividir dos nombres (01PR09)? Modifiqueu aquest
programa que era el núm 3 de l’activitat de manera que no surti del programa fins que s’hagi posat la opció
0. Tampoc ha de deixar entrar una opció que no sigui un valor entre 0 i 4*/

int main() {

	float n1, n2;
	int opcio;
	bool sortir;

	cout << "Introdueix un nombre" << endl;
	cin >> n1;

	cout << "Introdueix un altre nombre" << endl;
	cin >> n2;

	sortir = false;

	do {

				cout << "Tria una opció" << endl;

				cout << "1. Sumar" << endl;
				cout << "2. Multiplicar" << endl;
				cout << "3. Restar" << endl;
				cout << "4. Dividir" << endl;
				cout << "0. Sortir" << endl;

				cin >> opcio;


				switch (opcio) {
					case 1:
						cout << n1 + n2 << endl;
						break;
					case 2:
						cout << n1 * n2 << endl;
						break;
					case 3:
						cout << n1 - n2 << endl;
						break;
					case 4:
						cout << n1 / n2 << endl;
						break;
					case 0:
						sortir = true;
						break;
					default:
						cout << "Opció incorrecta" << endl;
				}

	}	while (!sortir);

	cout << "Has sortit";

	return 0;
}
