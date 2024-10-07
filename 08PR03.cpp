//============================================================================
// Name        : 08PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*(for) Feu un programa que trobi la Mitjana de les xifres d’un nombre de 4 xifres. El programa
ha de validar amb un do..while que el nombre que li entrem té exactament 4 xifres.*/

int main() {

	float mitjana, suma;
	int nombre, digit;

	do
	{
		cout << "Introdueix un nombre" << endl;
		cin >> nombre;

	}	while(nombre<1000 or nombre>9999); //while=siempre que

	for (suma = 0 ; nombre>0; nombre = nombre/10)
	{
		digit = nombre % 10;
		suma=suma+digit;
	}

	mitjana=suma/4;

	cout << "La mitjana de les xifres és " << (float)mitjana << endl;

	return 0;
}
