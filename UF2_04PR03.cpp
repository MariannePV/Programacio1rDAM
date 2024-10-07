//============================================================================
// Name        : UF2_04PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions 4.3) Funci� que retorna un punter. Feu una funci� a la qual li enviem una
taula de nombres enters i la funci� ens retorna a trav�s d�un punter el nombre major de
la taula, el nombre m�s petit i la mitjana dels valors de la taula.
*/

#include <iostream>
#define MAX 5
using namespace std;

int *major_menor_mitjana(int t[MAX]);

int main() {

	int *punter;
	int taula[MAX] = {1,2,3,4,5};

	punter = major_menor_mitjana(taula);

	cout << "El nombre m�s gran de la taula �s: " << *punter << endl;
	cout << "El nombre m�s petit de la taula �s: " << *(punter+1) << endl;
	cout << "La mitjana dels valors de la taula �s: " << *(punter+2) << endl;

	delete [] punter;

	return 0;
}

int *major_menor_mitjana(int t[MAX])
{
	int *p=new int[3];

	*(p)=t[0]; //El m�s gran
	*(p+1)=t[0]; //El m�s petit
	*(p+2)=0; //

	for(int i=0;i<MAX;i++)
	{
		if(t[i]>*(p))
			*(p)=t[i];

		if(t[i]<*(p+1))
			*(p+1)=t[i];

		*(p+2) = *(p+2) + t[i];
	}

	*(p+2)=*(p+2)/MAX;

	return p;
}
