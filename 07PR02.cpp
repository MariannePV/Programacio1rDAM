//============================================================================
// Name        : 07PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*Feu un programa que faci una validaci� d�entrada de manera que s�hagi d�entrar un valor entre 1 i 4 (ambd�s
inclosos).*/

int main() {

	int n;

	do {
		cout << "Introdueix un valor entre 1 i 4 (ambd�s inclosos)" << endl;
		cin >> n;

	}	while (n<1 or n>4);  // (!(n <= 4 and n >= 1))

	cout << "Valor acceptat";

	return 0;
}
