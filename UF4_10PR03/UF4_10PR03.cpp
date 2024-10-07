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

	//figura *f = new figura(); //Declarem el punter tipus figura, assignant-li una adreça de memòria.
	cercle c(2);
	rectangle r(2, 4);

	return 0;
}

/*
Les classes polimòrfiques, són aquelles que obligatòriament, també s'han de definir a les classes filles (subclasses).
La classe polimòrfica es declara amb la paraula virtual davant, i obligatòriament el destructor també serà virtual.
*/
