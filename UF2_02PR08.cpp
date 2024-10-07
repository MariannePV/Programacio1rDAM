//============================================================================
// Name        : UF2_02PR08.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions28) Fes una funci� a la qual li passem una taula i ens la capgira. Aquesta
funci� per intercanviar els valors far� servir la funci� anterior. Vol dir que la funci�
aquesta cridar� a la funci� swap que heu fet abans.
*/

#include <iostream>
#define MAX 5
using namespace std;

void valors_taula(int t[MAX]);
void intercanviar(int &n1, int &n2);
void capgirar(int t[MAX]);

int main() {

	int taula[MAX] = {1,2,3,4,5};

	cout << "La taula �s: ";

	valors_taula(taula);

	cout << endl;

	capgirar(taula);

	cout << "La taula capgirada �s: ";

	valors_taula(taula);

	return 0;
}

void valors_taula(int t[MAX])
{
	int i;

	for (i=0; i<MAX; i++)
		cout << t[i] << ", ";

}

void intercanviar(int &n1, int &n2)
{
	int aux;

	aux = n1;
	n1 = n2;
	n2 = aux;

}

void capgirar(int t[MAX])
{
	int i;

	for (i=0; i<MAX/2; i++)
	{
		intercanviar(t[i], t[MAX-i-1]);
	}
}
