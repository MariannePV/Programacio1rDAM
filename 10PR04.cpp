//============================================================================
// Name        : 10PR04.cpp
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

//Matrius04 Fes un programa que ens digui si en una matriu plena de nombres algun d’ells és primer.

int main() {

	int i, j, superior = 5, inferior = 1, divisor, n;
	int matriu[FILES][COLUMNES];
	bool primer;
	bool trobat;

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

	trobat = false;
	i=0;

	while(i< FILES and !trobat)
	{
		j=0;
		while(j < COLUMNES and !trobat)
		{
			//----------------------------------
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
					trobat=true;
			//-----------------------------------

			j++;
		}
		i++;
	}

	if (trobat)
		cout << "Un o més nombres de la matriu són primers" << endl;
	else
		cout << "No hi ha nombres primers dins la matriu" << endl;

	return 0;
}
