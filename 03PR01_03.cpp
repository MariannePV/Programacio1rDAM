//============================================================================
// Name        : 03PR01_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int n;


	cout << "Escriu un nombre igual o major a 1" << endl;
	cin >> n;

	while (n > 0)
	{
		if(n % 2 == 0)
		{
			cout << n << ", ";
		}
		n--;  // n-- = n-1;
	}

	return 0;
}
