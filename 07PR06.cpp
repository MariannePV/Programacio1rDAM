//============================================================================
// Name        : 07PR06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Fes un programa que ens digui quants d�gits 5 cont� un n�mero de 4 xifres.

int main() {

	int nombre, digit, comptador;

	cout << "Introdueix un nombre de quatre xifres" << endl;
	cin >> nombre;



	for (  comptador = 0 ; digit > 0; nombre = nombre / 10)
	{
		digit = nombre % 10;
		if (digit == 5)
		{
			comptador++;
		}
	}
	if (comptador >= 1)
		cout << "El nombre cont� " << comptador << " d�gits 5";
	else
		cout << "El nombre no cont� cap d�git 5";

	return 0;
}
