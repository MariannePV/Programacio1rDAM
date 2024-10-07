//============================================================================
// Name        : A05MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include "figura.h"
using namespace std;

int main() {

	figura *f = new cercle(2);
	cout << f -> tipus() << endl;
	delete f;

	f = new rectangle(2, 4);
	cout << f -> tipus() << endl;
	delete f;

	f= new figura();
	cout << f -> tipus() << endl;
	delete f;

	return 0;
}
