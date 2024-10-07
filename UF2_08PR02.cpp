//============================================================================
// Name        : UF2_08PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
2. Fes una funció que ens digui quantes vegades es troba un element dintre d’un array. Aquesta
funció ha de servir per a qualsevol tipus d’array.
*/

#include <iostream>
#define MAX 5
using namespace std;

template <class tipus1> void valors_taula(tipus1 t[MAX]);
template < class tipus1> int cerca_nombre(tipus1 t[MAX], tipus1 element);

int main() {

	int nombre;
	int taula[MAX]={1,2,3,2,2};

	cout << "La taula és: ";

	valors_taula(taula);

	cout << endl;

	cout << "Introdueix un nombre per a cercar dins la taula" << endl;
	cin >> nombre;

	if (cerca_nombre(taula, nombre) == 0)
		cout << "El nombre NO es troba dins la taula" << endl;
	else
		cout << "El nombre es troba dins la taula " << cerca_nombre(taula, nombre) << " vegades" << endl;

	return 0;
}

template <class tipus1> void valors_taula(tipus1 t[MAX])
{
	int i;

	for (i=0; i<MAX; i++)
		cout << t[i] << ", ";
}

template < class tipus1> int cerca_nombre(tipus1 t[MAX], tipus1 element)
{
	int comptador=0;
	for(int i=0; i<MAX; i++)
	{
		if (element == t[i])
			comptador++;
	}
	return comptador;
}
