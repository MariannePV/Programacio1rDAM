//============================================================================
// Name        : A05MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

bool primer (int num);
void modificar_taula(int t[MAX]);
void mostrar_taula(int t[MAX]);

int main() {

	int taula[MAX]={5,2,12,4,7};

	cout << "La taula inicial:" << endl;
	mostrar_taula(taula);

	modificar_taula(taula);

	cout << "La taula modificada:" << endl;
	mostrar_taula(taula);

	return 0;
}

bool primer (int num)
{
	int divisor;
	bool primo;

	divisor = 2;
	primo = true;

	while ((divisor < num) and (primo))
	{
		if (num % divisor == 0)
			primo = false;
		else
			divisor++;
	}

	return primo;
}

void modificar_taula(int t[MAX])
{
	int i;

	for(i=0; i<MAX; i++)
	{
		if(primer(t[i]))
			t[i] = 0;
	}
}

void mostrar_taula(int t[MAX])
{
	int i;

	for(i=0; i<MAX; i++)
	{
		cout << t[i] << ", ";
	}
	cout << endl;
}












