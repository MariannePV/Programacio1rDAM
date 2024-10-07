//============================================================================
// Name        : A04MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char caracter=' ';
	unsigned int i;
	int comptador, aux;

	string frase;

	cout << "Introdueix una frase" << endl;
	getline(cin, frase);
	cout << endl << frase << endl;

	aux = 0;
	comptador = 0;

	for (i = 0; i < frase.length(); i++)
	{
		if ((frase[i] != caracter) and (comptador >= aux))
		{
			comptador++;
			cout << " l";
			cout << comptador;
		}
		else
		{
			aux = comptador;
			cout << " h";
			cout << aux;
		}
	}

	cout << comptador << " " << aux << endl;

	return 0;
}
