//============================================================================
// Name        : UF2_02PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions22) Fes una funció que rebrà un nombre i ens retornarà utilitzant el propi
paràmetre el seu quadrat.
*/

#include <iostream>
using namespace std;
void quadrat(int &n);

int main() {

	int nombre;

	cout << "Introdueix un nombre" << endl;
	cin >> nombre;

	cout << "El quadrat del nombre és: ";

	quadrat(nombre);

	cout << nombre;

	return 0;
}

void quadrat(int &n)
{
	n= n*n;
}
