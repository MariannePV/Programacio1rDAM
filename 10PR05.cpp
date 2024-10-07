//============================================================================
// Name        : 10PR05.cpp
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

//Matrius05 Fes un programa que ens mostri per pantalla tots els nombres primers que conté una matriu.

int main() {

	int i, j, superior = 5, inferior = 1, divisor, n;
	int matriu[FILES][COLUMNES];
	bool primer;

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

	cout << endl << "Aquests son tots els nombres primers que conté la matriu:" << endl;

	for(i=0; i<FILES; i++)
	{
		for(j=0; j<COLUMNES; j++)
		{
			n = matriu[i][j];

			divisor = 2;
			primer = true;

			while ((divisor < n) and (primer))
			{
				if (n % divisor == 0)
					primer = false;
				else
					divisor++;
			}
			if (primer)
				cout << n << " ";
		}
	}

	return 0;
}
