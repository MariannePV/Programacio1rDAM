//============================================================================
// Name        : 01PR04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int n1, n2;

	cout << "Introdueix un n�mero" << endl;
	cin >> n1;

	cout << "Introdueix un altre n�mero" << endl;
	cin >> n2;

	if (n1 == n2)
		cout << "Els dos nombres s�n iguals" << endl;
	else
		cout << "Els dos nombres no s�n iguals" << endl;

	return 0;
}
