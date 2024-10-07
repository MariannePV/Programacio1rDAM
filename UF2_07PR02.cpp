//============================================================================
// Name        : UF2_07PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Fes una funci� recursiva que ens digui si una cadena de car�cters �s pal�ndrom o no.
Una cadena �s pal�ndrom si coincideix quan la capgirem. Per exemple �aeiiea� �s
pal�ndrom. Penseu que li heu de passar la paraula i els �ndex de les posicions que vagi
comprovant, comen�ant per tota la llargada i �anar reduint�
*/

#include <iostream>
using namespace std;

bool palindrom(string str, unsigned int i = 0);

int main() {

	string paraula;

	cout << "Introdueix una paraula per comprovar si �s o no pal�ndrom" << endl;
	getline (cin, paraula);

	if(palindrom(paraula))
		cout << "La paraula �s pal�ndrom" << endl;
	else
		cout << "La paraula NO �s pal�ndrom" << endl;

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
