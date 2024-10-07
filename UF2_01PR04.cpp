//============================================================================
// Name        : UF2_01PR04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 (funcions14) Fes una funció a la qual li passem dos números i mostra per pantalla la
 seva suma. Els dos paràmetres que li passarem seran del tipus int i, com que la funció
 no retornarà res ha de ser void. Comprova el seu funcionament.
 */

#include <iostream>
using namespace std;
void suma(int n1, int n2);

int main() {

	int num1, num2;

	cout << "Introdueix un nombre" << endl;
	cin >> num1;
	cout << "Introdueix un altre nombre" << endl;
	cin >> num2;

	suma(num1, num2);

	return 0;
}

void suma(int n1, int n2) {
	cout << n1 + n2;
}

// int cerca(int t[MAX], int element);
