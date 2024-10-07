//============================================================================
// Name        : UF2_01PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*(funcions12) Fes una funció a la qual li passis com a paràmetre un nom, per exemple
Pepe, i ens mostri per pantalla “hola Pepe”. La funció no retorna res, per tant serà
void. Comprova el seu funcionament.
*/

#include <iostream>
using namespace std;

void salutacio(string nom_propi);

int main() {

	string nom;

	cout << "Introdueix un nom" << endl;
	cin >> nom;

	salutacio(nom);

	return 0;
}

void salutacio(string nom_propi)
{
	cout << "Hola " << nom_propi << endl;
}
