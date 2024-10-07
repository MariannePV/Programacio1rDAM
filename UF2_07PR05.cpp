//============================================================================
// Name        : UF2_07PR05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Fes una funció recursiva a la qual li entrem el dividend i el divisor i ens diu quin és el
quocient de la divisió (fent restes de manera recursiva)
*/

#include <iostream>
using namespace std;

int quocient(int dividend, int divisor, int i = 0);

int main() {

	int divd; //dividend
	int divs; //divisor

	cout << "Introdueix el dividend" << endl;
	cin >> divd;
	cout << "Introdueix el divisor" << endl;
	cin >> divs;

	cout << "El quocient de la divisió és: " << quocient(divd, divs);

	return 0;
}

int quocient(int dividend, int divisor, int i)
{
	if((dividend-divisor) < 0)
		return i;
	else
		return quocient(dividend - divisor, divisor, i+1);
}
