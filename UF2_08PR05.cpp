//============================================================================
// Name        : UF2_08PR05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
5. Fes una funci� que faci la cerca del valor major i menor d�una taula. Aquests dos valors es
tornaran a trav�s d�un punter que retornar� la funci�. Aquesta funci� ha de servir per a qualsevol
tipus d�array.
*/

#include <iostream>
#define MAX 5
using namespace std;

template <class tipus1> tipus1 *major_menor(tipus1 t[MAX]);

int main() {

	int *punter;
	int taula[MAX] = {1,2,3,4,5};

	punter = major_menor(taula);

	cout << "El nombre m�s gran de la taula �s: " << *punter << endl;
	cout << "El nombre m�s petit de la taula �s: " << *(punter+1) << endl;

	delete [] punter;

	return 0;
}

template <class tipus1> tipus1 *major_menor(tipus1 t[MAX])
{
	tipus1 *p=new tipus1[2];

	*(p)=t[0]; //El m�s gran
	*(p+1)=t[0]; //El m�s petit

	for(int i=0;i<MAX;i++)
	{
		if(t[i]>*(p))
			*(p)=t[i];

		if(t[i]<*(p+1))
			*(p+1)=t[i];
	}

	return p;
}
