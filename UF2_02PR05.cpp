//============================================================================
// Name        : UF2_02PR05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions25) Fes una funció que rebi una taula i un nombre i ens retorni la funció cert
o fals de depenent de si s’ha trobat el nombre a dintre de la taula.
*/

#include <iostream>
#define MAX 5
using namespace std;

void valors_taula(int t[MAX]);
bool cerca_nombre(int t[MAX], int num);

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

void valors_taula(int t[MAX])
{
	int i;

	for (i=0; i<MAX; i++)
		cout << t[i] << ", ";
}

bool cerca_nombre(int t[MAX], int num)
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
