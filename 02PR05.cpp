//============================================================================
// Name        : 02PR05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int n1, n2;

	cout << "Introdueix un nombre" << endl;
	cin >> n1;
	cout << "Introdueix un altre nombre" << endl;
	cin >> n2;

	if ((n1 % 2 == 0) or (n2 % 2 == 0))
			cout << "Com a mínim un dels dos nombres és parell" << endl;
		else
			cout << "Cap dels dos nombres és parell" << endl;


	return 0;
}
