//============================================================================
// Name        : 01PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int n;

	cout << "Introdueix un n�mero" << endl;
	cin >> n;

	if (n % 2 == 0)
		cout << "�s parell" << endl;
	else
		cout << "�s imparell" << endl;

	return 0;
}
