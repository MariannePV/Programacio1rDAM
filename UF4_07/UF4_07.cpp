//============================================================================
// Name        : UF4_07.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <iostream>
#include "lavabo.h"
using namespace std;

int main() {

	lavabo l1("David");
	lavabo l2("Marc");

	l1.entrar();
	l2.entrar();

	if(l2.esticadins())
		cout << "He entrat" << endl;
	else
		cout << "No he pogut entrar" << endl;

	return 0;
}
