//============================================================================
// Name        : 000_condicionals.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int x;

	cout << "si us plau, entra un valor" << endl;
	cin >> x;

	if (x == 100)
	  cout << "x is 100" << endl;
	else
	  cout << "x is not 100" << endl;

	if (x > 0)
	  cout << "x is positive";
	else if (x < 0)
	  cout << "x is negative";
	else
	  cout << "x is 0";

	return 0;
}
