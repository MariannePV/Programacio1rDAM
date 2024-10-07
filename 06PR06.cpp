//============================================================================
// Name        : 06PR06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//PR0306 Feu un programa que ens sumi totes les xifres parells d’un nombre.
//for = de recorregut

int main() {

	int nombre, digit, comptador;

	cout << "Introdueix un nombre" << endl;
	cin >> nombre;

	comptador = 0;

	for (digit = nombre; digit > 0; nombre = nombre / 10)
	{
		digit = nombre % 10;
		if (digit % 2 == 0)
			comptador = comptador + digit;
	}

	cout << "La suma de les xifres parelles del nombre és " << comptador;

	return 0;
}
