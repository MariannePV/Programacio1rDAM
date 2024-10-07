//============================================================================
// Name        : UF2_01PR06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(funcions16) Fes una funci� a la qual li passem un n�mero i ens diu si el n�mero �s
primer o no. El par�metre que li passem ser� de tipus int i la funci� retornar� un valor
boole�. Comprova el seu funcionament.
 */

#include <iostream>
using namespace std;
bool primer (int num);

int main() {

	int n;

	cout << "Introdueix un nombre" << endl;
	cin >> n;

	if(primer(n))
		cout << "El nombre �s primer" << endl;
	else
		cout << "El nombre NO �s primer" << endl;

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
