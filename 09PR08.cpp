//============================================================================
// Name        : 09PR08.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <time.h>
#define MAX 100
using namespace std;

/*
Arrays08 Ompliu un array de 100 posicions amb nombres aleatoris entre 1 i 50, mostreu-lo i després feu que
els nombres parells que té es copiïn en un array que es digui parells i que els nombres senars que té es
copiïn en un altre array que es digui senar. Finalment ha de mostrar els tres arrays resultants.
 */

int main() {

	int taula[MAX];
	int parells[MAX];
	int imparells[MAX];
	int i, superior = 50, inferior = 1;
	int p, imp; //parell = p ; imparell = imp

	srand (time (NULL));

	for (i=0; i<MAX; i++)
	{
		taula[i]=rand() % (superior - inferior + 1) + inferior;
	}
	for (i=0; i<MAX; i++)
	{
		cout << taula[i] << " ";
	}

	cout << endl;

	p=0;
	imp=0;

	for (i=0; i<MAX; i++)
	{
		if (taula[i] % 2 == 0)
		{
			parells[p] = taula[i];
			p++;
		}
		else
		{
			imparells[imp] = taula[i];
			imp++;
		}
	}

	cout << endl << "Ara mostrarem una taula amb tots els nombres parells de la taula anterior" << endl;

	for (i=0; i<p; i++)
	{
		cout << parells[i] << " ";
	}

	cout << endl << endl << "Ara mostrarem una taula amb tots els nombres imparells de la taula anterior" << endl;

	for (i=0; i<imp; i++)
	{
		cout << imparells[i] << " ";
	}

	return 0;
}
