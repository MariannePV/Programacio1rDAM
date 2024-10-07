//============================================================================
// Name        : 11PR05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
(strings05) Feu un programa que a partir del signe * ens faci un salt de línia.
*/

int main() {

	string str1;

	char caracter='*';
	unsigned int i;

	str1 = "No sóc un complet inútil,* si més no, serveixo *de mal exemple.";

	for (i = 0; i < str1.length(); i++)
	{
		if(str1[i]==caracter)
			cout << endl;
		else
			cout << str1[i];
	}

	return 0;
}
