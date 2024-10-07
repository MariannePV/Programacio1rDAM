//============================================================================
// Name        : UF2_04PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions 4.2) Funció que retornar un punter. Feu una funció a la qual li enviem dos
nombres i ens ha de retornar la funció a través d’un punter la suma, i la multiplicació
dels dos nombres.
*/

#include <iostream>
using namespace std;

int *suma_multiplicacio(int n1, int n2);

int main() {

	int *punter;

	punter = suma_multiplicacio(5, 7);

	cout << "La suma és " << *punter << endl;
	cout << "La multi és " << *(punter+1) << endl;

	delete [] punter;

	return 0;
}
//--------------------------------------------
int *suma_multiplicacio(int n1, int n2)
{
	int *p = new int[2];

	*(p)=n1+n2;
	*(p+1)=n1*n2;

	return p;
}
