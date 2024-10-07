//============================================================================
// Name        : 03PR01_08.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Donat un natural n>0 llegit per teclat, dir si és un nombre primer (divisible per 1 i per ell mateix).

int main() {

	int n;
	int divisor;
	bool primer;

	cout << "Introdueix un nombre major a 0" << endl;
	cin >> n;

	divisor = 2;
	primer = true;

	while ((divisor < n) and (primer))
	{
		if (n % divisor == 0)
			primer = false;
		else
			divisor++;
	}
		if (primer)
			cout << "És un nombre primer" << endl;
		else
			cout << "No és un nombre primer" << endl;

	return 0;
}
