//============================================================================
// Name        : 10PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define COLUMNES 6
#define FILES 4
using namespace std;

/*
Matrius01 Feu un programa que ompli de zeros tots els elements d’una matriu i que després amb un altre
bucle mostri el resultat per pantalla.
*/

int main() {

	int i, j;
	int matriu[FILES][COLUMNES];

	for(i=0; i<FILES; i++)
	{
		for(j=0; j<COLUMNES; j++)
		{
			matriu[i][j]=0;
		}
	}

	for(i=0; i<FILES; i++)
	{
		for(j=0; j<COLUMNES; j++)
		{
			cout << matriu[i][j];
		}
		cout << endl;
	}

	return 0;
}
