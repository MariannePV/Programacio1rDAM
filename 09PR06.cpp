//============================================================================
// Name        : 09PR06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

//Ararys06 Feu un programa que capgiri un array

int main() {

	int taula[MAX] = {1,2,3,4,5};
	int i, aux; //aux=auxiliar

	for (i=0; i<MAX/2; i++)
	{
		aux=taula[i];
		taula[i]=taula[MAX-i-1];
		taula[MAX-i-1]=aux;
	}
	for (i=0; i<MAX; i++)
	{
		cout << taula[i] << " ";
	}


	return 0;
}
