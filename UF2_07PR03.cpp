//============================================================================
// Name        : UF2_07PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Feu una funci� recursiva que calculi el resultat d�elevar un n�mero a un exponent.
Penseu que un n�mero elevat a 0 �s 1 i per tant seria un cas final i que un n�mero
elevat a 1 �s ell mateix i per tant seria l�altre cas final.
*/

#include <iostream>
using namespace std;

int elevat(int base, int exponent, int num_elevat = 1);

int main() {

	int num, num_exp; //num_exp = exponent

	cout << "Introdueix un nombre per elevar-lo" << endl;
	cin >> num;
	cout << "Introdueix un exponent" << endl;
	cin >> num_exp;

	cout << "El nombre elevat a l'exponent �s: " << elevat(num, num_exp) << endl;

	return 0;
}

int elevat(int base, int exponent, int num_elevat)
{
	if(exponent > 1)
	{
		return elevat(base, exponent - 1, num_elevat * base);
	}
	else if (exponent == 1)
	{
		return num_elevat * base;
	}
	else
	{
		return 1;
	}
}
