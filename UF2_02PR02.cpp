//============================================================================
// Name        : UF2_02PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions22) Fes una funci� que rebr� un nombre i ens retornar� utilitzant el propi
par�metre el seu quadrat.
*/

#include <iostream>
using namespace std;
void quadrat(int &n);

int main() {

	int nombre;

	cout << "Introdueix un nombre" << endl;
	cin >> nombre;

	cout << "El quadrat del nombre �s: ";

	quadrat(nombre);

	cout << nombre;

	return 0;
}

void quadrat(int &n)
{
	n= n*n;
}
