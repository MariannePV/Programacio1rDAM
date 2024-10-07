//============================================================================
// Name        : 03PR02_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Donat un nombre natural n llegit pel teclat, mostrar tots els nombres de n fins a 1, en ordre decreixent.

int main() {

	int n;
	int m=1;

	cout << "Introdueix un nombre" << endl;
	cin >> n;

	while (n>=m)
	{
		cout << n << ", ";
		n--;
	}
	return 0;
}
