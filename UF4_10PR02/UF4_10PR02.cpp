//============================================================================
// Name        : UF4_10PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Polimorfisme
//============================================================================

#include <iostream>
#include <stdio.h>
#include "figura.h"
using namespace std;

int main() {

	cout << "Hola bon dia" << endl;

	figura *f = new cercle(2); //Declarem el punter tipus figura, assignant-li una adre�a de mem�ria.
	cout << f -> get_area() << endl;
	delete f;

	f = new rectangle(2, 4);
	cout << f -> get_area() << endl;
	delete f;

	return 0;
}

/*
Les classes polim�rfiques, s�n aquelles que obligat�riament, tamb� s'han de definir a les classes filles (subclasses).
La classe polim�rfica es declara amb la paraula virtual davant, i obligat�riament el destructor tamb� ser� virtual.
*/
