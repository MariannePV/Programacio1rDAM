//============================================================================
// Name        : 06PR04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//PR0304 Feu un programa que ens digui quantes xifres d�un nombre s�n un nombre parell.

int main() {

	int numero, digito, comptador;

	cout << "Introdueix un nombre" << endl;
	cin >> numero;

	comptador = 0;

	for (digito=numero; digito>=2;)
	{
		digito = numero % 10;
		numero = numero /10;
		if (digito % 2 == 0)
			comptador ++;
	}
	if (comptador > 0)
		cout << "El n�mero introduit t� " << comptador << " nombres parells";
	else
		cout << "El n�mero introduit no t� cap nombre parell";

	return 0;
}
