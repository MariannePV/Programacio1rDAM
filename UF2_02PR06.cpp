//============================================================================
// Name        : UF2_02PR06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions26) Fes una funció igual que l’anterior però que la funció ens retorni la
posició on ha trobat l’element o un -1 en cas que no l’hagi trobat.
*/

#include <iostream>
#define MAX 5
using namespace std;

void valors_taula(int t[MAX]);
int cerca_nombre(int t[MAX], int num);

int main() {

	int nombre, posicio;
	int taula[MAX]={1,2,3,4,5};

	cout << "La taula és: ";

	valors_taula(taula);

	cout << endl;

	cout << "Introdueix un nombre per a cercar dins la taula" << endl;
	cin >> nombre;

	posicio = cerca_nombre(taula, nombre);

	if (posicio == -1)
		cout << "El nombre no s'ha trobat dins la taula" << endl;
	else
		cout << "El nombre s'ha trobat dins la taula en la posició: " << posicio << endl;

	return 0;
}

void valors_taula(int t[MAX])
{
	int i;

	for (i=0; i<MAX; i++)
		cout << t[i] << ", ";
}

int cerca_nombre(int t[MAX], int num)
{
	bool trobat = false;
	int i=0;

	while (i<MAX and !trobat)
	{
		if (num == t[i])
		{
			trobat = true;
		}
		else
			i++;
	}

	if(trobat)
		return i;
	else
		return -1;
}
