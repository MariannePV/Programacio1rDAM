//============================================================================
// Name        : A01MarianneP.cpp
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

	int i, j, superior = 10, inferior = 1;
	int matriu[FILES][COLUMNES];
	bool trobat;

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

	trobat = false;
	i=0;

	while(i< FILES and !trobat)
	{
		j=0;
		while(j < COLUMNES and !trobat)
		{
			//----------------------------------
			if (matriu[i][j] > 5)
				trobat = true;
			else
				i++;
			//-----------------------------------

			j++;
		}
		i++;
	}

	if (trobat)
		cout << "Dins la matriu hi ha algún nombre major que 5" << endl;
	else
		cout << "Dins la matriu no hi ha cap nombre major que 5" << endl;

	return 0;
}
