//============================================================================
// Name        : UF2_01PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(funcions13) Fes una funci� a la qual li passem un n�mero per par�metre i ens retorna
el doble d�aquest n�mero. La funci� es dir� doble i ser� del tipus int ja que ens
retornar� un enter. Comprova el seu funcionament.
 */

#include <iostream>
using namespace std;
int doble (int n);

int main() {

	int num;

	cout << "Introdueix un nombre" << endl;
	cin >> num;

	cout << doble(num);

	return 0;
}

int doble (int n)
{
	return n*2;
}
