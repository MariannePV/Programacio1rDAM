//============================================================================
// Name        : 02PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	float n1, n2, n3;

	cout << "Introdueix un nombre" << endl;
	cin >> n1;
	cout << "Introdueix un segon nombre" << endl;
	cin >> n2;
	cout << "Introdueix un tercer nombre" << endl;
	cin >> n3;

	if ((n1 <= n2) and (n2<= n3))
		cout << "Els nombre han estat introduits en ordre creixent" << endl;
	else
		cout << "Els nombres no s'han introduit en ordre creixent" << endl;

	return 0;
}
