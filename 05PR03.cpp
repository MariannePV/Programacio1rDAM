//============================================================================
// Name        : 05PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Donat un natural n>0 llegit per teclat, mostrar tots els seus divisors.

int main() {

	int n, divisor;

	cout << "Introdueix un nombre" << endl;
	cin >> n;

	divisor = n;

	do {
		if (n % divisor == 0)
			cout << divisor << ", ";
		divisor --;
	}	while (divisor > 0);

	return 0;
}
