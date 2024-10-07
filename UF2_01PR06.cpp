//============================================================================
// Name        : UF2_01PR06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(funcions16) Fes una funció a la qual li passem un número i ens diu si el número és
primer o no. El paràmetre que li passem serà de tipus int i la funció retornarà un valor
booleà. Comprova el seu funcionament.
 */

#include <iostream>
using namespace std;
bool primer (int num);

int main() {

	int n;

	cout << "Introdueix un nombre" << endl;
	cin >> n;

	if(primer(n))
		cout << "El nombre és primer" << endl;
	else
		cout << "El nombre NO és primer" << endl;

	return 0;
}

bool primer (int num)
{
	int divisor;
	bool primo;

	divisor = 2;
	primo = true;

	while ((divisor < num) and (primo))
	{
		if (num % divisor == 0)
			primo = false;
		else
			divisor++;
	}

	return primo;
}
