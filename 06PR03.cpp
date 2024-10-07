//============================================================================
// Name        : 06PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//PR0303 Feu un programa que ens digui si alguna de les xifres d’un nombre és parell o no.

int main() {

	int n;
	bool parell;

	cout << "Introdueix un nombre" << endl;
	cin >> n;

	parell = false;
	while (!parell and n>0)
	{
		if ((n % 10) % 2 == 0)
		parell = true;
		else
			n= n/10;
	}
	if (parell)
		cout << "El nombre conté un nombre parell";
	else
		cout << "El nombre no conté cap nombre parell";

	return 0;
}
