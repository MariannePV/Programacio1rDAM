//============================================================================
// Name        : 03PR01_05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Donat un natural n>0 llegit per teclat, mostrar tots els seus divisors.

int main() {

	int n;
	int divisor;

	cout << "Escriu un número major de 0" << endl;
	cin >> n;

	if (n <= 0)
	{
		cout << "Error, ha de ser major a 0";
	}
	else
	{
	divisor = n;

	while (divisor > 0)
	{
		if (n % divisor == 0)
		{
			cout << divisor << ", ";
		}
		divisor--;
	}
	}
	return 0;
}
