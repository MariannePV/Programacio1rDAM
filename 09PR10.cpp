//============================================================================
// Name        : 09PR10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

//Arrays10 Feu un programa que ens digui si els valors d’un array són capicua o no.

int main() {

	int taula[MAX] = {1,2,3,2,1};
	int i;
	bool es_capicua;

	i = 0;
	es_capicua = true;

	while (es_capicua and i<MAX/2)
	{
		if (taula[i] != taula[MAX-i-1])
			es_capicua=false;
		else
			i++;
	}

	cout << "A continuació es mostra l'array:" << endl;

	for (i=0; i<MAX; i++)
		cout << taula[i] << " ";

	if (es_capicua)
		cout << endl << endl << "Si que és capicua";
	else
		cout << endl << endl << "No és capicua";

	return 0;
}
