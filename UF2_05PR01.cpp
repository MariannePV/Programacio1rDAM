//============================================================================
// Name        : UF2_05PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions sobrecarregades) Feu un programa al qual li podem passar per paràmetre dos nombres o tres
nombres. Si li passem dos nombres els sumarà tots dos. Si li passem tres nombres els sumarà tots tres.
*/

#include <iostream>
using namespace std;

int suma(int n1, int n2);
int suma(int n1, int n2, int n3);

int main() {

	cout << "La suma dels elements és: " << suma(3, 4) << endl;
	cout << "La suma dels elements és: " << suma(3, 5, 7) << endl;

	return 0;
}

int suma(int n1, int n2)
{
	return n1+n2;
}

int suma(int n1, int n2, int n3)
{
	return n1+n2+n3;
}
