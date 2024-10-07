//============================================================================
// Name        : A03MarianneP.cpp
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

	Compte <string, int> c1("David", 2000);

	c1.set_interes(10);

	c1.ingressar_interessos();

	cout << "El saldo actual és de: " << c1.get_saldo() << endl;

	return 0;
}
