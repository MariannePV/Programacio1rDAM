//============================================================================
// Name        : UF2_05PR04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Paràmetres per defecte) Feu una funció que ens mostrarà una taula que li passem. Per defecte aquesta
taula ens la mostrarà del dret, però si en un segon paràmetre li passem un true ens la mostrarà capgirada.
*/

#include <iostream>
#define MAX 5
using namespace std;

void mostrar_taula(int t[MAX], bool girar=false);

int main() {

	int taula[MAX] = {1,2,3,4,5};

	mostrar_taula(taula/*, true*/);

	return 0;
}

void mostrar_taula(int t[MAX], bool girar)
{
	int i;

	if(girar)
	{
		for(i=MAX-1; i>=0; i--)
		{
			cout << t[i] << " ";
		}
	}
	else
	{
		for(i=0; i<MAX; i++)
		{
			cout << t[i] << " ";
		}
	}
}
