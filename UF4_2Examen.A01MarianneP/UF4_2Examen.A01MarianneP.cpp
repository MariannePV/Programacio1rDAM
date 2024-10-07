//============================================================================
// Name        : A01MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <iostream>
#include "cercle.h"

using namespace std;

void prova();

int main() {

	cercle c2, c3;

	cout << "Número de cercles creats: " << c3.num_creats() << endl;

	prova();

	cout << "Número de cercles creats: " << c2.num_creats() << endl;

	return 0;
}

void prova()
{
	cercle c;

	cout << "Número de cercles creats: " << c.num_creats() << endl;
}
