//============================================================================
// Name        : EX04MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int nombre, xifra, suma;
	bool suma10;

	cout << "Introdueix un nombre" << endl;
	cin >> nombre;

	suma10 = false;

	while (nombre > 0 and !suma10)
	{
		xifra = nombre % 10;
		suma = suma + xifra;
		nombre = nombre / 10;

		if (suma >= 10)
			suma10=true;
	}

	if (suma10)
		cout << "La suma de totes o d'algunes xifres del nombre, sumen 10" <<endl;
	else
		cout << "La suma de les xifres del nombre no arriba a 10" << endl;

	return 0;
}
