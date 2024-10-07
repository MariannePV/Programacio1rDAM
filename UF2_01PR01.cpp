//============================================================================
// Name        : UF2_01PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(funcions11) Fes una funció que escrigui “hola, com va la vida” per pantalla. La funció
serà de tipus void, per tant no retorna res i no rep cap paràmetre. Comprova el seu
funcionament.
 */

#include <iostream>
using namespace std;

void salutacio();

int main() {

	salutacio();

	return 0;
}

void salutacio() // Tipus void: funció que no té valor, però si fa coses, per tant no es pot fer cout << salutacio();
{
	cout << "Hola, com va la vida" << endl;
}
