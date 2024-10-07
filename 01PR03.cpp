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

	cout << "Introdueix un número" << endl;
	cin >> n;

	if (n % 2 == 0)
		cout << "és parell" << endl;
	else
		cout << "és imparell" << endl;

	return 0;
}
