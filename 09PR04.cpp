//============================================================================
// Name        : 09PR04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

//Arrays04 Feu un programa que sumi tots els elements d’un array

int main() {

	int taula[MAX] = {1,2,3,4,5};
	int suma, i;

	cout << "Els elements de la taula són: ";

	for (i=0; i<MAX; i++)
	{
		suma = suma + taula[i];
		cout << taula[i] << " ";
	}

	cout << endl << "Els elements de la taula sumen: " << suma;


	return 0;
}
