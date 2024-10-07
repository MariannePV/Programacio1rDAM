//============================================================================
// Name        : Examen2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
EX 1

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
			while (i<COLUMNES and !trobat)
			{
				if (matriu[i][j] < 3)
					trobat = true;
				else
					i++;
			}
			//-----------------------------------

			j++;
		}
		i++;
	}

	if (trobat)
		cout << "Dins la matriu hi ha algún nombre més petit que tres" << endl;
	else
		cout << "no" << endl;

	return 0;
}
 */

/*
EX 2

	#include <iostream>
	#include <cstdlib>
	#include <time.h>
	#define COLUMNES 3
	#define FILES 3
	using namespace std;

	int main() {

	int i, j, superior = 5, inferior = 1, comptador;
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

	comptador = 0;

	for(i=0; i<FILES; i++)
	{
		for(j=0; j<COLUMNES; j++)
		{
			//----------------------------------
			for (i=0; i<COLUMNES; i++)
			{
				if (matriu[i][j] < 3)
					comptador ++;
			}
			//----------------------------------
		}
	}

	cout << "Hi ha " << comptador << " nombres menors de 3 dins la taula";

	return 0;
}
 */
