//============================================================================
// Name        : UF2_02PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//(Funcions21) Fes una funci� que rebr� un nombre i ens retornar� el seu quadrat.

#include <iostream>
using namespace std;
int quadrat(int n);

int main() {

	int nombre;

	cout << "Introdueix un nombre" << endl;
	cin >> nombre;

	cout << "El quadrat del nombre �s: " << quadrat(nombre);

	return 0;
}

int quadrat(int n)
{
	return n*n;
}
