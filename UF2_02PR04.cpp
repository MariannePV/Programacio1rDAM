//============================================================================
// Name        : UF2_02PR04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions24) Fes una funci� que rebi una taula i dos par�metres i, ens retorni (a trav�s
dels par�metres) el valor m�s gran i el m�s petit de la taula.
*/

#include <iostream>
#define MAX 5
using namespace std;

void valors_taula(int t[MAX]);
void minmaxtaula(int t[MAX], int &num1, int &num2);

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

void valors_taula(int t[MAX])
{
	int i;

	for (i=0; i<MAX; i++)
		cout << t[i] << ", ";

}

void minmaxtaula(int t[MAX], int &num1, int &num2) //num1 = min    num2 = max
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
