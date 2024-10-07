//============================================================================
// Name        : UF2_08PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
3. Fes un programa amb tres templates, una funció swap, una altra que capgiri un array i una altra
que mostri l’array (Aquest programa ha de servir per un array de qualsevol tipus)
*/

#include <iostream>
#define MAX 5
using namespace std;

template <class tipus1> void valors_taula(tipus1 t[MAX]);
template <class tipus1> void intercanviar(tipus1 &n1, tipus1 &n2);
template <class tipus1> void capgirar(tipus1 t[MAX]);

int main() {

	int taula[MAX] = {1,2,3,4,5};

	cout << "La taula és: ";

	valors_taula(taula);

	cout << endl;

	capgirar(taula);

	cout << "La taula capgirada és: ";

	valors_taula(taula);

	return 0;
}

template <class tipus1> void valors_taula(tipus1 t[MAX])
{
	int i;

	for (i=0; i<MAX; i++)
		cout << t[i] << ", ";

}

template <class tipus1> void intercanviar(tipus1 &n1, tipus1 &n2)
{
	tipus1 aux;

	aux = n1;
	n1 = n2;
	n2 = aux;

}

template <class tipus1> void capgirar(tipus1 t[MAX])
{
	int i;

	for (i=0; i<MAX/2; i++)
	{
		intercanviar(t[i], t[MAX-i-1]);
	}
}
