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

	cout << "Introdueix un car�cter" << endl;
	cin >> caracter;

	if (caracter >= 97 and caracter <= 122)
		cout << "�s min�scula" << endl;
	else if (caracter >= 65 and caracter <= 90)
		cout << "�s maj�scula" << endl;
	else if (caracter >= 48 and caracter <= 57)
		cout << "�s un n�mero" << endl;
	else
		cout << "No �s un n�mero, ni una lletra maj�scula ni min�scula" << endl;


	return 0;
}
