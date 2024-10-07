//============================================================================
// Name        : UF2_02PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//(Funcions21) Fes una funció que rebrà un nombre i ens retornarà el seu quadrat.

#include <iostream>
using namespace std;
int quadrat(int n);

int main() {

	int nombre;

	cout << "Introdueix un nombre" << endl;
	cin >> nombre;

	cout << "El quadrat del nombre és: " << quadrat(nombre);

	return 0;
}

int quadrat(int n)
{
	return n*n;
}
