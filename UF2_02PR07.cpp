//============================================================================
// Name        : UF2_02PR07.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions27) Feu una funci� swap (com la de les diapositives) a la qual li passem dos
n�meros i ens els intercanvia. Aix� vol dir que els dos par�metres que hem fet servir
per cridar la funci� quedaran modificats.
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

	cout << "Els dos nombres intercanviats s�n: " << num1 << ", " << num2 << endl;

	return 0;
}

void intercanviar(int &n1, int &n2)
{
	int aux;

	aux = n1;
	n1 = n2;
	n2 = aux;

}
