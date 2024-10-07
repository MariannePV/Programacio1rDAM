//============================================================================
// Name        : 10PR07.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <time.h>
#define COLUMNES 3
#define FILES 3
using namespace std;

/*
Matrius07 Fes un programa igual que l’anterior, amb la diferència de que hi guardarem la suma de les
columnes, no les de les files.
*/

int main() {

	int taula[COLUMNES];
	int matriu[FILES][COLUMNES];
	int i, j, superior = 5, inferior = 1, suma;

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

	cout << endl;

	for(j=0; j<COLUMNES; j++)
	{
		suma = 0;
		for(i=0; i<FILES; i++)
		{
			suma = suma + matriu[i][j];

		}
		taula[j] = suma;
	}

	cout << "La suma de cada fila es mostra a continuació:" << endl;

	for (i=0; i<COLUMNES; i++)
	{
		cout << taula[i] << " ";
	}

	return 0;
}
