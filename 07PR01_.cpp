//============================================================================
// Name        : 07PR01_.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*Feu un programa que faci una validació d’entrada de manera que no permeti entrar un número inferior a
zero.*/

int main() {

	int n;

	do {
		cout << "Introdueix un nombre major o igual 0" << endl;
		cin >> n;

	}	while (n < 0);

	cout << "Nombre vàlid";

	return 0;
}
