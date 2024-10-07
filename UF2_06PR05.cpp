//============================================================================
// Name        : UF2_06PR05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Fes una funció recursiva que ens mostri la suma dels dígits d’un nombre.

#include <iostream>
using namespace std;

int suma(int n, int sumador = 0);

int main() {

	int num;

	cout << "Introdueix un nombre per a sumar els seus dígits" << endl;
	cin >> num;

	cout << "El resultat de la suma és: " << suma(num) << endl;

	return 0;
}

int suma(int n, int sumador)
{
	if(n > 0)
	{
		return suma(n/10, ((n%10) + sumador));
	}
	else
	{
		return sumador;
	}
}
//suma(123, 0) -- suma(123, 3+0) -- suma(2,
