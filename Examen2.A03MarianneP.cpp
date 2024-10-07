//============================================================================
// Name        : A03MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 10
using namespace std;

int main() {

	int taula[MAX];
	int i;
	bool incrementa3;

	//Per fer la comprobació, aquest for inicialitza amb nombres que s'incrementen en 3.

	for (i=0; i<MAX; i++)
	{
		taula[i]=i * 3;
	}

	i = 0;
	incrementa3 = true;

	while (i<MAX-1 and incrementa3)
	{
		if (taula[i]+3 == taula[i+1])
			i++;
		else
			incrementa3 = false;
	}

	for (i=0; i<MAX; i++)
	{
		cout << taula[i] << " ";
	}

	if (!incrementa3)
		cout << endl << "Dins l'array cada valor no s'incrementa en 3";
	else
		cout << endl << "Dins l'array cada valor s'incrementa en 3";

	return 0;
}
