//============================================================================
// Name        : 06PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*PR0302 Utilitzant un bucle fes una validació d’entrada de manera que ens permeti entrar
l’edat d’un treballador que s’ha de trobar entre 16 i 67 anys.
*/

int main() {

	int edat;

	do
	{
		cout << "Introdueixi la seva edat" << endl;
		cin >> edat;
	}	while (edat < 16 or edat > 67);

	cout << "Edat vàlida" << endl;

	return 0;
}
