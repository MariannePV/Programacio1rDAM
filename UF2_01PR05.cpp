//============================================================================
// Name        : UF2_01PR05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(funcions15) Fes una funció a la qual li passem dos números i ens retorna la seva
suma. Els dos paràmetres que li passarem seran del tipus int i el retorn de la funció ha
de ser int també. Comprova el seu funcionament.
 */

#include <iostream>
using namespace std;
int suma(int n1, int n2);

int main() {

	int num1, num2;

	cout << "Introdueix un nombre" << endl;
	cin >> num1;
	cout << "Introdueix un altre nombre" << endl;
	cin >> num2;

	cout << suma(num1, num2)*5;  //  fet=dibuixar_quadrat_negre()

	return 0;
}

int suma(int n1, int n2)
{
	return n1 + n2;
}
