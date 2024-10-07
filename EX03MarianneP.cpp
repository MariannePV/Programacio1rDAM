//============================================================================
// Name        : EX03MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int nombre, opcio, resultat;
	bool sortir;

	do
	{
		do
		{
			cout << "Tria una opció" << endl;

			cout << "1. Calcular el quadrat d'un número" << endl;
			cout << "2. Calcular el cub d'un número" << endl;
			cout << "3. Sortir" << endl;
			cin >> opcio;

		}	while(opcio>3 or opcio<1);

		switch (opcio)
		{
		case 1:
			cout << "Introdueix un nombre" << endl;
			cin >> nombre;

			resultat = nombre*nombre;

			cout << "El quadrat del número " << nombre << " és " << resultat  << endl;
			break;
		case 2:
			cout << "Introdueix un nombre" << endl;
			cin >> nombre;

			resultat = nombre*nombre*nombre;

			cout << "El cub del número " << nombre << " és " << resultat  << endl;
			break;
		case 3:
			sortir = true;
			break;
		}
	}	while (!sortir);

	if (sortir)
		cout << "Has sortit del programa";

	return 0;
}
