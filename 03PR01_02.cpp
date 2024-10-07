//============================================================================
// Name        : 03PR01_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int n;
	int m=0;

	cout << "Introdueix un nombre" << endl;
	cin >> n;

	while (m<n) {
		cout << m << ", ";
		m++;
	}

	return 0;
}
