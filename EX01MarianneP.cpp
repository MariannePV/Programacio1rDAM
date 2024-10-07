//============================================================================
// Name        : EX01MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int nombre, xifra;
	bool digit;

	cout << "Introdueix un nombre" << endl;
	cin >> nombre;

	digit = false;

	while (nombre>0 and !digit)
	{
		xifra = nombre % 10;
		nombre = nombre / 10;
		if (xifra > 5)
		{
			digit = true;
		}
	}

	if (digit)
		cout << "El nombre conté una o més xifres més grans que 5" << endl;
	else
		cout << "El nombre no conté cap xifra més gran que 5" << endl;

	return 0;
}
