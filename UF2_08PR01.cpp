//============================================================================
// Name        : UF2_08PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
1. Fes una funció que ens digui si un element es troba dintre d’un array o no. Aquesta funció ha de
servir per a qualsevol tipus d’array.
*/

#include <iostream>
#define MAX 5
using namespace std;

template <class tipus1> void valors_taula(tipus1 t[MAX]);
template <class tipus1> bool cerca_nombre(tipus1 t[MAX], tipus1 num);

int main() {

	int nombre;
	int taula[MAX]={1,2,3,4,5};

	cout << "La taula és: ";

	valors_taula(taula);

	cout << endl;

	cout << "Introdueix un nombre per a cercar dins la taula" << endl;
	cin >> nombre;

	if (cerca_nombre(taula, nombre))
		cout << "El nombre es troba dins la taula" << endl;
	else
		cout << "El nombre NO es troba dins la taula" << endl;

	return 0;
}

template <class tipus1> void valors_taula(tipus1 t[MAX])
{
	int i;

	for (i=0; i<MAX; i++)
		cout << t[i] << ", ";
}

template <class tipus1> bool cerca_nombre(tipus1 t[MAX], tipus1 num)
{
	bool trobat = false;
	int i=0;

	while (i<MAX and !trobat)
	{
		if (num == t[i])
			trobat = true;
		else
			i++;
	}
	return trobat;
}
