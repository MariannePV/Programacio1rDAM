//============================================================================
// Name        : UF2_02PR07.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions27) Feu una funció swap (com la de les diapositives) a la qual li passem dos
números i ens els intercanvia. Això vol dir que els dos paràmetres que hem fet servir
per cridar la funció quedaran modificats.
*/

#include <iostream>
using namespace std;

void intercanviar(int &n1, int &n2);

int main() {

	int num1, num2;

	cout << "Introdueix un nombre" << endl;
	cin >> num1;
	cout << "Introdueix un altre nombre" << endl;
	cin >> num2;

	intercanviar(num1, num2);

	cout << "Els dos nombres intercanviats són: " << num1 << ", " << num2 << endl;

	return 0;
}

void intercanviar(int &n1, int &n2)
{
	int aux;

	aux = n1;
	n1 = n2;
	n2 = aux;

}
