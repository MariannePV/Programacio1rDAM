//============================================================================
// Name        : UF2_01PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(funcions11) Fes una funci� que escrigui �hola, com va la vida� per pantalla. La funci�
ser� de tipus void, per tant no retorna res i no rep cap par�metre. Comprova el seu
funcionament.
 */

#include <iostream>
using namespace std;

void salutacio();

int main() {

	salutacio();

	return 0;
}

void salutacio() // Tipus void: funci� que no t� valor, per� si fa coses, per tant no es pot fer cout << salutacio();
{
	cout << "Hola, com va la vida" << endl;
}
