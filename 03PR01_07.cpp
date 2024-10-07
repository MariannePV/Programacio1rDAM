//============================================================================
// Name        : 03PR01_07.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Donat un natural n>=1 llegit per teclat, mostrar per pantalla tots els quadrats perfectes menors que n i que a més siguin parells.

int main() {

	int n;
	int i;

	cout << "Introdueix un nombre més gran o igual a 1" << endl;
	cin >> n;

	i=1;

	while ((i*i)<n)
	{
		if (( i * i ) % 2 == 0)
		{
			cout << (i*i) << ", ";
		}
		i++;
	}
	return 0;
}
