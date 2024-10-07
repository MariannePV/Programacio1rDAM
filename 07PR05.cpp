//============================================================================
// Name        : 07PR05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Fes un programa que ens digui si un numero de 4 xifres conté o no el dígit 5.

int main() {

	int nombre, xifra;
	bool digit5;

	cout << "Introdueix un nombre de quatre xifres" << endl;
	cin >> nombre;


	digit5 = false;

	while (nombre>0 and !digit5)
	{
		xifra = nombre % 10;
		nombre = nombre / 10;
		if (xifra == 5) {
			digit5 = true;
		}
	}

	if (digit5)
		cout << "El nombre conté el dígit 5" << endl;
	else
		cout << "El nombre no conté el dígit 5" << endl;

	/*if (xifra != 5)
		cout << "El nombre no conté el dígit 5" << endl;*/


	return 0;
}
