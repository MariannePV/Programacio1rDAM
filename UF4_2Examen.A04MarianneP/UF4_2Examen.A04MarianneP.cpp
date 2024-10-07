//============================================================================
// Name        : A04MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include "compte.h"
using namespace std;

int main() {

	compte c;

	c.set_saldo(500);

	cout << "El 3% del saldo del client és: " << percent(c) << endl;

	return 0;
}

float percent(compte c)
{
	return c.saldo * 0.03;
}
