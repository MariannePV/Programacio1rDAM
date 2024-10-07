//============================================================================
// Name        : 01PR06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char caracter;

	cout << "Introdueix un caràcter" << endl;
	cin >> caracter;

	if (caracter >= 97 and caracter <= 122)
		cout << "És minúscula" << endl;
	else if (caracter >= 65 and caracter <= 90)
		cout << "És majúscula" << endl;
	else if (caracter >= 48 and caracter <= 57)
		cout << "És un número" << endl;
	else
		cout << "No és un número, ni una lletra majúscula ni minúscula" << endl;


	return 0;
}
