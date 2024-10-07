//============================================================================
// Name        : 000arrays.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5 //MAX 5 = tope de la taula
using namespace std;

int main() {

	int taula[MAX] = {1,2,3,2,1};
	/*int taula2[MAX]={1,2,3,4,78};
	int suma, comptador;
	bool parell_trobat;*/
	int i;//, j;

	/*for (i=0; i<MAX; i++)
	{
		taula[i]=i*10;
	}
	for (i=0; i<MAX; i++)
	{
		cout << taula[i] << " ";
	}*/

	/*suma=0;
	for (i=0; i<MAX; i++)
	{
		suma = suma + taula2[i];
		cout << suma << " ";
	}*/

	/*for (i=0, comptador=0; i<MAX; i++)
		{
			if (taula2[i] % 2 == 0)
				comptador++;
		}
	cout << comptador;

	parell_trobat=false;
	i=0;

	while (!parell_trobat and i<MAX)
	{
		if (taula2[i] % 2 == 0)
			parell_trobat=true;
		else
			i++;
	}
	if (parell_trobat)
		cout << "En la taula hi ha algun nombre parell";
	else
		cout << "No";*/

	//--------------------------------------------------------------------------

	bool es_capicua = true;

	i = 0;

	while (es_capicua and i<MAX/2)
	{
		if (taula[i] != taula[MAX-i-1])
			es_capicua=false;
		else
			i++;
	}

	if (es_capicua)
		cout << "si";
	else
		cout << "no";

	return 0;
}
