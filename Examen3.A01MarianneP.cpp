//============================================================================
// Name        : A01MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

void valors_taula(int t[MAX]);
int operacions(int t[MAX], char opcio='g');

int main() {

	int taula[MAX] = {8,2,3,7,1};

	cout << "Els valors de la taula són els següents: " << endl;
	valors_taula(taula);
	cout << endl;

	operacions(taula, 'p');

	return 0;
}

void valors_taula(int t[MAX])
{
	int i;

	for (i=0; i<MAX; i++)
		cout << t[i] << ", ";
}

int operacions(int t[MAX], char opcio)
{
	int numero, i;
	numero = t[0];

	if(opcio == 'g')
	{
		for (i=1, numero = t[0]; i<MAX; i++)
		{
			if (numero < t[i])
				numero = t[i];
		}
		cout << "El valor més gran de la taula és: " << numero << endl;
	}
	else if(opcio == 'p')
	{
		for (i=1, numero = t[0]; i<MAX; i++)
		{
			if (numero > t[i])
				numero = t[i];
		}
		cout << "El valor més petit de la taula és: " << numero << endl;
	}
	else
	{
		cout << "El segon valor que ha introduit és incorrecte, ha de ser una 'g' o una 'p'" << endl;
	}
	return numero;
}
