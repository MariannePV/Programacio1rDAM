//============================================================================
// Name        : 03PR02_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Donat un natural n llegit per teclat, ha d'escriure tots els nombres resultants de divisions successives entre 10

int main() {

	int n;
	int m;

	cout << "Introdueix un nombre" << endl;
	cin >> n;

	m=0;

	while (n > m)
	{
		cout << n << endl;
		n = n/10;
	}

	return 0;
}
