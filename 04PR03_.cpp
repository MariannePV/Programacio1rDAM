//============================================================================
// Name        : 04PR03''.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int i, suma, numero, digit;

	for (i=5000; i>=2; i=i-2)
	{
		numero = i;
		suma = 0;
		while (numero > 0)
		{
			digit = numero % 10;
			suma = suma + digit;
			numero = numero / 10;
		}
		cout << "La suma de " << i << " és "<< suma << endl;

	}

	return 0;
}
