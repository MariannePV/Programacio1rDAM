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
bool ordenada(int t[MAX]);

int main() {

	int taula[MAX]={1,2,3,4,5};

	cout << "La taula és: ";

	valors_taula(taula);

	cout << endl;

	if (ordenada(taula))
		cout << "La taula està ordenada de forma creixent" << endl;
	else
		cout << "La taula NO està ordenada de forma creixent" << endl;

	return 0;
}

void valors_taula(int t[MAX])
{
	int i;

	for (i=0; i<MAX; i++)
		cout << t[i] << ", ";
}

bool ordenada(int t[MAX])
{
	bool ordenada = true;
	int i = 0;

	while (i<MAX-1 and ordenada)
	{
		if (t[i] <= t[i+1])
			i++;
		else
			ordenada = false;
	}

	return ordenada;
}
