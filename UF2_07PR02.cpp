//============================================================================
// Name        : UF2_07PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Fes una funció recursiva que ens digui si una cadena de caràcters és palíndrom o no.
Una cadena és palíndrom si coincideix quan la capgirem. Per exemple “aeiiea” és
palíndrom. Penseu que li heu de passar la paraula i els índex de les posicions que vagi
comprovant, començant per tota la llargada i “anar reduint”
*/

#include <iostream>
using namespace std;

bool palindrom(string str, unsigned int i = 0);

int main() {

	string paraula;

	cout << "Introdueix una paraula per comprovar si és o no palíndrom" << endl;
	getline (cin, paraula);

	if(palindrom(paraula))
		cout << "La paraula és palíndrom" << endl;
	else
		cout << "La paraula NO és palíndrom" << endl;

	return 0;
}

bool palindrom(string str, unsigned int i)
{
	if(i > (str.length()/2))
	{
		return true;
	}
	else if(str[i] == str[str.length()-i-1])
	{
		i++;
		return palindrom(str, i);
	}
	else
	{
		return false;
	}
return 1;
}
