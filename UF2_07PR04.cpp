//============================================================================
// Name        : UF2_07PR04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Fes una funció recursiva que inverteixi els dígits d’un número, de manera que la funció
valgui el nombre invertit.
*/

#include <iostream>
using namespace std;

int invertir(int n, int numero_invertit = 0);

int main() {

	int n;

	cout << "Introdueix un nombre per invertir" << endl;
	cin >> n;

	cout << "El nombre invertit és: " << invertir(n);

	return 0;
}

int invertir(int n, int numero_invertit)
{
	if(n > 0)
	{
		return invertir(n/10, numero_invertit*10 + n%10);
	}
	else
		return numero_invertit;
}
