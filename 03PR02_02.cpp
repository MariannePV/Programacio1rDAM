//============================================================================
// Name        : 03PR02_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Donat un nombre natural n llegit pel teclat, mostrar tots els nombres de 1 fins a n, i en files de 5

int main() {

	int n;
	int m;

	cout << "Introdueix un nombre" << endl;
	cin >> n;

	m = 1;

	while (m <= n)
	{
		cout << m << ", ";
		if (m % 5 == 0)
		{
			cout << endl;
		}
		m++;
	}
	return 0;
}
