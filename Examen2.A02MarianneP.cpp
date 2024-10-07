//============================================================================
// Name        : A02MarianneP.cpp
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

int main() {

	int i, j, superior = 10, inferior = 1, comptparells, comptsenars; // compt = comptador
	int matriu[FILES][COLUMNES];

	srand (time (NULL));

	for (i=0;i<FILES;++i)
	{
		for(j=0; j<COLUMNES; j++)
		{
			matriu[i][j]= rand() % (superior - inferior + 1) + inferior;
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

	comptsenars = 0;
	comptparells = 0;

	for(i=0; i<FILES; i++)
	{
		for(j=0; j<COLUMNES; j++)
		{
			//----------------------------------
				if (matriu[i][j] % 2 != 0)
					comptsenars++;
				else
					comptparells ++;
			//----------------------------------
		}
	}

	cout << "Dins la matriu hi ha un tant parcent igual a " << (comptsenars * 100) / (FILES*COLUMNES) << "% de nombres senars." << endl;
	cout << "Dins la matriu hi ha un tant parcent igual a " << (comptparells * 100) / (FILES*COLUMNES) << "% de nombres parells." << endl;

	return 0;
}
