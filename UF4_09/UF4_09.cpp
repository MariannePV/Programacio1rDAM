//============================================================================
// Name        : UF4_09.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include <stdexcept>
#include "template.h"

using namespace std;

int main() {

	Compte <int, int> c1(7,900);
	Compte <string, int> c2("Maria", 100);
	Compte <string, bool> c3("Pau", false);

	c1.set_usuari(9);
	cout << c1.get_usuari() << endl;
	cout << c2.get_saldo() << endl;

	if(c3.get_saldo())
	{
		cout << "El saldo és positiu" << endl;
	}
	else
		cout << "El saldo és negatiu" << endl;


	return 0;
}
