//============================================================================
// Name        : UF2_08PR05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
5. Fes una funció que faci la cerca del valor major i menor d’una taula. Aquests dos valors es
tornaran a través d’un punter que retornarà la funció. Aquesta funció ha de servir per a qualsevol
tipus d’array.
*/

#include <iostream>
#define MAX 5
using namespace std;

template <class tipus1> tipus1 *major_menor(tipus1 t[MAX]);

int main() {

	int *punter;
	int taula[MAX] = {1,2,3,4,5};

	punter = major_menor(taula);

	cout << "El nombre més gran de la taula és: " << *punter << endl;
	cout << "El nombre més petit de la taula és: " << *(punter+1) << endl;

	delete [] punter;

	return 0;
}

template <class tipus1> tipus1 *major_menor(tipus1 t[MAX])
{
	tipus1 *p=new tipus1[2];

	*(p)=t[0]; //El més gran
	*(p+1)=t[0]; //El més petit

	for(int i=0;i<MAX;i++)
	{
		if(t[i]>*(p))
			*(p)=t[i];

		if(t[i]<*(p+1))
			*(p+1)=t[i];
	}

	return p;
}
