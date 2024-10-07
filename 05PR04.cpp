//============================================================================
// Name        : 05PR04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Donat un natural n>0 llegit per teclat, dir si és un nombre primer.

int main() {

	int n, divisor;
	bool primer;

	cout << "Introdueix un nombre major a 0" << endl;
	cin >> n;

	divisor = 2;
	primer = true;

	do {
		if (n % divisor == 0)
		{
			primer = false;
		}
		else
			divisor++;
	}	while ((divisor < n) and (primer));

	if (primer)
		cout << "El nombre és un nombre primer";
	else
		cout << "El nombre no és un nombre primer";

	return 0;
}
