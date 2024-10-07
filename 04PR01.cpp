//============================================================================
// Name        : 04PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Modificar l’exemple anterior per tal que al final de cada fila ens mostri la suma dels elements de la fila.

int main() {

	int n, i , j;
	int suma;

	cout << "Introdueix un nombre" << endl;
	cin >> n;

	for (i=1; i<=n; i++)
	{
		suma=0;
		for (j=i; j<=n; j++)
		{
			cout << j << " ";
			suma=suma+j;
		}
		cout << "= " << suma;
		cout << endl;
	}

	return 0;
}
