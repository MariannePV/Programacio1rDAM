//============================================================================
// Name        : 02PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	float n1, n2, n3, aux; // El valor aux = auxiliar

	cout << "Introdueix un nombre" << endl;
	cin >> n1;
	cout << "Introdueix un segon nombre" << endl;
	cin >> n2;
	cout << "Introdueix un tercer nombre" << endl;
		cin >> n3;

	if (n1 > n2)
	{
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	if (n2 > n3)
	{
		aux = n2;
		n2 = n3;
		n3 = aux;
	}
	if (n1 > n2)
	{
		aux = n1;
		n1 = n2;
		n2 = aux;
	}

	cout << "Els tres nombres ordenats són: " << endl;
	cout << n1 << endl;
	cout << n2<< endl;
	cout << n3<< endl;


	return 0;
}
