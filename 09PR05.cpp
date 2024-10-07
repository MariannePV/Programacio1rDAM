//============================================================================
// Name        : 09PR05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

//Arrays05 Feu un programa que trobi la mitjana dels elements d’un array

int main() {

	int taula[MAX] = {1,2,3,4,5};
	int suma, i;
	float mitjana;

	cout << "Els elements de la taula són: ";

	for (i=0; i<MAX; i++)
	{
		suma = suma + taula[i];
		cout << taula[i] << " ";
	}

	mitjana = suma/MAX;

	cout << endl << "La mitjana dels elements de la taula és: " << mitjana;

	return 0;
}
