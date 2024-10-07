//============================================================================
// Name        : 10PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <time.h>
#define COLUMNES 5
#define FILES 3
using namespace std;

//Matrius03 Fes un programa que calculi la mitjana dels elements d’una matriu

int main() {

	int i, j, superior = 5, inferior = 1, suma;
	int matriu[FILES][COLUMNES];

	srand (time (NULL));

	for (i=0;i<FILES;++i)
	{
		for(j=0; j<COLUMNES; j++)
		{
			matriu[i][j]=rand() % (superior - inferior + 1) + inferior;
		}
	}

	cout << "La matriu: " << endl;

	for(i=0; i<FILES; i++)
	{
		for(j=0; j<COLUMNES; j++)
		{
			cout << matriu[i][j] << " ";
		}
		cout << endl;
	}

	suma = 0;

	for(i=0; i<FILES; i++)
	{
		for(j=0; j<COLUMNES; j++)
		{
			suma = suma + matriu[i][j];
		}
	}

	cout << endl << "La suma dels elements de la matriu és: " << suma;

	cout << endl << "La mitjana dels elements de la matriu és: " << suma / (COLUMNES * FILES);

	return 0;
}
