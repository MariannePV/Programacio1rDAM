//============================================================================
// Name        : 06PR05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*PR0305 Utilitzant una variables booleana feu un programa que ens digui si les xifres d’un
nombre estan ordenades de forma creixent.*/
//while = de cerca

int main() {

	int numero, ultim, penultim;
	bool creixent;

	cout << "Introdueix un nombre" << endl;
	cin >> numero;

	creixent=true;

	while (creixent and numero > 9)
	{
		ultim = numero % 10;
		numero = numero / 10;
		penultim = numero % 10;
		if (penultim > ultim)
			creixent = false;
	}
	if (creixent)
		cout << "Les xifres estan ordenades de forma creixent";
	else
		cout << "Les xifres no estan ordenades de forma creixent";
	return 0;
}
