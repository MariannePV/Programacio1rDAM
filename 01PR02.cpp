//============================================================================
// Name        : 01PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#define PI 3.1415

int main() {

	float radi, longitud;

	cout << "Introdueix el radi" << endl;
	cin >> radi;

	longitud = 2 * PI * radi;

	cout << "La longitud de la circumferència és: " << longitud;

	return 0;
}
