//============================================================================
// Name        : 03PR01_04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Donat un natural n>=1 llegit per teclat, mostrar per pantalla tots els nombres fins a n que siguin parells i múltiples de 7.

int main() {

	int n;


	cout << "Escriu un nombre igual o major a 1" << endl;
	cin >> n;

	while (n > 0)
	{
		if ((n % 2 == 0) and (n % 7 == 0))
		{
			cout << n << ", ";
		}
		n--;
	}

	return 0;
}
