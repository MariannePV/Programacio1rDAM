//============================================================================
// Name        : 04PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Fer un algorisme que donat un nombre n>0 mostri per pantalla (suposem n=5 en el següent exemple):

int main() {

	int n, i , j;
	int suma;

	cout << "Introdueix un nombre" << endl;
	cin >> n;

	for (i=1; i<=n; i++)
	{
		suma=0;
		for (j=1; j<=i; j++)
		{
			cout << j;
			if (j != i)
			{
				cout << " + ";
			}
			suma=suma+j;
		}
		cout << " = " << suma;
		cout << endl;
	}

	return 0;
}


