//============================================================================
// Name        : UF2_04PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions 4.1) Tractament d’una taula amb punters. Feu un programa que capgiri un
array d'enters, però tot fet amb punters. Utilitzeu la notació de punter en comptes de la
notació de declaració de taules.
Haureu de fer una funció (o reutilitzar alguns que tingueu feta) per omplir-lo amb
aleatoris
Una funció que intercanviï dos valors
Una altra per capgirar-lo
Una altra per mostrar l’array que utilitzareu abans i després d'haver-lo capgirat.
*/

#include <iostream>
#include <cstdlib>
#include <time.h>
#define MAX 5
using namespace std;

void aleatoris(int *p, int minim, int maxim);
void intercanviar_valors(int *p1, int *p2);
void capgirar(int *p);
void mostrar_taula(int t[MAX]);

int main() {

	int *p;

	p=new int[MAX];

	aleatoris(p,10,20);
	mostrar_taula(p);
	cout << endl;

	capgirar(p);

	mostrar_taula(p);

	delete []p;

	return 0;
}
//--------------------------------------------------
void aleatoris(int *p, int inferior, int superior)
{
	int i;

	srand (time (NULL));

	for (i=0;i<MAX;++i)
		*(p+i)=rand() % (superior - inferior + 1) + inferior;
}
//--------------------------------------------------
void intercanviar_valors(int *p1, int *p2)
{
	int aux;

	aux = *p1;
	*p1 = *p2;
	*p2 = aux;
}
//--------------------------------------------------
void capgirar(int *p)
{
	int i;

	for (i=0; i<MAX/2; i++)
	{
		intercanviar_valors(  (p+i) , (p+MAX-i-1)  );
	}
}
//--------------------------------------------------
void mostrar_taula(int *p)
{
	for (int i=0; i<MAX; i++)
	{
		cout << *(p+i) << " ";
	}
}
