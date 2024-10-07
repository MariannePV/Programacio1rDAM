//============================================================================
// Name        : UF2_08PR04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
4. Fes una funci� que faci la cerca del valor major i menor d�una taula. Aquests dos valors es
tornaran a trav�s de dos par�metres per refer�ncia. Aquesta funci� ha de servir per a qualsevol
tipus d�array.
*/

#include <iostream>
#define MAX 5
using namespace std;

template <class tipus1> void valors_taula(tipus1 t[MAX]);
template <class tipus1> void minmaxtaula(tipus1 t[MAX], tipus1 &num1, tipus1 &num2);

int main() {

	int n1, n2;
	int taula[MAX]={1,2,3,4,5};

	cout << "La taula �s: ";

	valors_taula(taula);

	cout << endl;

	minmaxtaula(taula, n1, n2);

	cout << "El valor m�s petit de la taula �s: " << n1 << endl;
	cout << "El valor m�s gran de la taula �s: " << n2 << endl;

	return 0;
}

template <class tipus1> void valors_taula(tipus1 t[MAX])
{
	int i;

	for (i=0; i<MAX; i++)
		cout << t[i] << ", ";

}

template <class tipus1> void minmaxtaula(tipus1 t[MAX], tipus1 &num1, tipus1 &num2) //num1 = min    num2 = max
{
	num1=num2=t[0];

	for (int i=1; i<MAX; i++)
	{
		if (num1 > t[i])
			num1 = t[i];
		if (num2 < t[i])
			num2 = t[i];
	}
}
