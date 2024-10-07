//============================================================================
// Name        : 02PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	float n1;

	cout << "Introdueix un nombre" << endl;
	cin >> n1;

	if (n1 >= 5000)
		cout << n1*0.9; //No cal fer-ho en tant per cent ((n1 * 10) / 100)) ho podem fer en tan per u
	else
		cout << n1*0.95 << endl;

	return 0;
}
