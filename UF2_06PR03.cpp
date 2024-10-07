//============================================================================
// Name        : UF2_06PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Fes una funció recursiva que mostri per pantalla els dígits d’un numero invertits. Si
entrem el 438 ens ha de mostrar el 834
*/

#include <iostream>
using namespace std;

void invertir(int n);

int main() {

	int num;

	cout << "Introdueix un nombre per capgirar-lo: " << endl;
	cin >> num;

	cout << "El nombre invertit és: " << endl;
	invertir(num);

	return 0;
}

void invertir(int n)
{
	cout << n % 10;
	if(n >= 10)
		invertir(n/10);
}
