//============================================================================
// Name        : 02PR04.cpp
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

	if ((n1 % 2 == 0) and (n2 % 2 == 0))
		cout << "Els dos nombres són parells" << endl;
	else
		cout << "Els dos nombres no són parells" << endl;

	return 0;
}
