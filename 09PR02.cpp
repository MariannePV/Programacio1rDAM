//============================================================================
// Name        : 09PR02.cpp
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
Arrays02 Ompliu un array de 100 posicions amb nombres aleatoris entre 1 i 50, mostreu-lo i després doneu
l’opció a l’usuari de cercar un cert nombre dintre de l’array. El programa ens ha de dir si el nombre existeix i
en quina posició s’ha trobat
*/

//El primer for es para ejecutar la acción y el segundo para mostrarla.

int main() {

	int taula [MAX];
	int i, superior=50, inferior=1;
	int nombre, opcio;
	bool sortir, nombreSI;

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

			nombreSI = false;
			i = 0;

			while (i<MAX and !nombreSI)
			{
				if (nombre == taula[i])
					nombreSI = true;
				else
					i++;
			}
			if (nombreSI)
				cout << "El nombre existeix dins la taula i es troba dins la posició: " << i;
			else
				cout << "El nombre no existeix dins la taula" << endl;
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
