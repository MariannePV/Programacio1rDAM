//============================================================================
// Name        : 000estructures.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;
int main() {

	struct client // està format per camps
	{
		string dni; // camp 1
		string nom; // camp 2
		int facturacio; // camp 3
	};

	client cli1, cli2;
	client taula[MAX];

	cli1.dni = "12345678E";
	cli1.facturacio = 4000;

	cout << cli1.dni;

	taula[2].facturacio=5000;

	taula[4].dni="22233344C";

	return 0;
}
