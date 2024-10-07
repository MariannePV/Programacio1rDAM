//============================================================================
// Name        : UF4_11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Funcions friend
//============================================================================

#include <iostream>
#include <stdio.h>
#include "friends.h"
using namespace std;

int main() {
	divisor d1(5);
	dividend d2(8);


	cout << operacio(d1,d2) << endl;



	return 0;
}

int operacio(divisor b, dividend e)
{
	return e.divid / b.divis;
}
