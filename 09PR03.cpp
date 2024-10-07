//============================================================================
// Name        : 09PR03.cpp
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

/*Arrays03 Ompliu un array de 100 posicions amb nombres aleatoris entre 1 i 50, mostreu-lo i després doneu
l’opció a l’usuari de cercar un cert nombre dintre de l’array. El programa ens ha de dir quantes vegades s’ha
trobat aquest nombre*/

int main() {

	int taula [MAX];
	int i, superior=50, inferior=1;
	int nombre, opcio, comptador;
	bool sortir;

	srand (time (NULL));

	for (i=0; i<MAX; ++i)
	{
		taula[i]=rand() % (superior - inferior + 1) + inferior;
		//cout << taula [i] << " ";  |  També podriem afegir aquesta línia a dins perquè les condicions (i=0; i<MAX; ++i) són les mateixes.
	}
	for (i=0; i<MAX; ++i)
	{
		cout << taula [i] << " ";
	}

	sortir=false;

	do
	{
		cout << endl << "1. Continuar" << endl;
		cout << "2. Sortir" << endl;
		cin >> opcio;

		switch (opcio)
		{
		case 1:
			cout << "Introdueix un nombre per cercar-lo a la taula" << endl;
			cin >> nombre;

			comptador = 0;
			for (i=0; i<MAX; i++)
			{
				if (nombre == taula[i])
					comptador ++;
			}
			cout << "El nombre existeix " << comptador << " cops dins la taula";
			break;
		case 2:
			sortir=true;
			break;
		}
	}	while (!sortir);

	if (sortir)
		cout << "Has sortit del programa";

	return 0;
}
