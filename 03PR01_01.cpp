//============================================================================
// Name        : 03PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int n, m;

	cout << "Introdueix un nombre" << endl;
	cin >> n;
	cout << "Introdueix un altre nombre" << endl;
	cin >> m;

	while (n<m){
		cout << n << ", ";
		n++;
	}

	return 0;
}
