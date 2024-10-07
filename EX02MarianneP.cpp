//============================================================================
// Name        : EX02MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int nombre, digit, comptador;

	cout << "Introdueix un nombre" << endl;
	cin >> nombre;

	for (comptador = 0 ; nombre > 0; nombre = nombre / 10)
	{
		digit = nombre % 10;
		if (digit > 5)
		{
			comptador++;
		}
	}
	if (comptador >= 1)
		cout << "El nombre conté " << comptador << " xifres més grans que cinc";
	else
		cout << "El nombre no conté cap xifra més gran que 5";

	return 0;
}
