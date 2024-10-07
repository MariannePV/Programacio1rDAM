//============================================================================
// Name        : UF2_06PR04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//Fes una funció recursiva que ens mostri la suma dels elements d’un vector.

#include <iostream>
#define MAX 3
using namespace std;

int suma(int t[MAX], int sumador = 0, int i = 0);

int main() {

	int taula[MAX] = {1,2,3};

	cout << "La suma dels elements del vector és: " << suma(taula);

	return 0;
}

int suma(int t[MAX], int sumador, int i)//sumador = suma; i = comptador
{
	if(i<MAX)
	{
		return suma(t, t[i] + sumador, i+1);
	}
	else
	{
		return sumador;
	}
}
//int suma(t, 0, 0) -- int suma(t, 1, 1) -- int suma(t, 1+2, 2) -- int suma(t, 1+2+3, 3)
