//============================================================================
// Name        : 10PR06.cpp
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

/*Matrius06 Fes un programa que guardi la suma de tots els elements de la fila de cada matriu en un array
unidimensional. La suma dels elements de la fila 0 la guardarem en la posició 0 de l’array, la suma dels
elements de la fila 1 la guardarem en la posició 1 de l’array, la suma dels elements de la fila 2 la guardarem
en la posició 2 de l’array i així successivament.*/

int main() {

	int taula[FILES];
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

	for(i=0; i<FILES; i++)
	{
		suma = 0;
		for(j=0; j<COLUMNES; j++)
		{

			suma = suma + matriu[i][j];
		}
		taula[i] = suma;
	}

	cout << "La suma de cada fila es mostra a continuació:" << endl;

	for (i=0; i<FILES; i++)
	{
		cout << taula[i] << " ";
	}

	return 0;
}
