//============================================================================
// Name        : 05PR05'.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Donat un natural n, mostrar la suma dels seus dígits.

int main() {

	int n, suma, digit, numero;

	cout << "Introdueix un nombre" << endl;
	cin >> n;


		numero = n;
		suma = 0;
		do {
			digit = numero % 10;
			suma = suma + digit;
			numero = numero / 10;

		}	while (numero > 0);
		cout << "La suma de " << n << " és " << suma << endl;

	return 0;
}
