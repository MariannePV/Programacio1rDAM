//============================================================================
// Name        : UF2_06PR05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Fes una funci� recursiva que ens mostri la suma dels d�gits d�un nombre.

#include <iostream>
using namespace std;

int suma(int n, int sumador = 0);

int main() {

	int num;

	cout << "Introdueix un nombre per a sumar els seus d�gits" << endl;
	cin >> num;

	cout << "El resultat de la suma �s: " << suma(num) << endl;

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
