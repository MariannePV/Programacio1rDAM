//============================================================================
// Name        : 10PR02.cpp
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

/*
Matrius02 Feu un programa que ompli dos matrius amb nombres aleatoris i que després faci una suma de
las dos matrius en una tercera matriu.
*/

int main() {

	int i, j, superior = 5, inferior = 1;
	int matriu1[FILES][COLUMNES];
	int matriu2[FILES][COLUMNES];
	int resultat[FILES][COLUMNES];

	srand (time (NULL));

	for (i=0;i<FILES;++i)
	{
		for(j=0; j<COLUMNES; j++)
		{
			matriu1[i][j]=rand() % (superior - inferior + 1) + inferior;
			matriu2[i][j]=rand() % (superior - inferior + 1) + inferior;
		}
	}

	cout << "Primera matriu: " << endl;

	for(i=0; i<FILES; i++)
	{
		for(j=0; j<COLUMNES; j++)
		{
			cout << matriu1[i][j] << " ";;
		}
		cout << endl;
	}

	cout << endl << "Segona matriu: " << endl;

	for(i=0; i<FILES; i++)
	{
		for(j=0; j<COLUMNES; j++)
		{
			cout << matriu2[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << "Matriu suma:" << endl;

	for(i=0; i<FILES; i++)
	{
		for(j=0; j<COLUMNES; j++)
		{
			resultat[i][j]= matriu1[i][j] + matriu2[i][j];
		}
	}

	for(i=0; i<FILES; i++)
		{
			for(j=0; j<COLUMNES; j++)
			{
				cout << resultat[i][j] << " ";
			}
			cout << endl;
		}

	return 0;
}
