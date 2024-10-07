//============================================================================
// Name        : 05PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Donat un natural n llegit per teclat, dir per quants dígits està format.

int main() {

	int n, comptador;

	cout << "Introdueix un nombre" << endl;
	cin >> n;

	do {
		n=n/10;
		comptador++;
	}	while (0 < n);

	cout << comptador;

	return 0;
}
