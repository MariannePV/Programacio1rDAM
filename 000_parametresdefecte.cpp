//============================================================================
// Name        : 000_parametresdefecte.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int divisio(int num1, int num2=5); //Si a la funci� num2 no li passen cap par�metre, sempre ser� 5 (nom�s es possa dins la capcelera)

//Si deixem un par�metre per defecte al mig f(num1, , num3) no compila

//------------------------------------------------
int main() {

	cout << divisio(200,20) << endl;

	cout << divisio(200) << endl;

	return 0;
}
//------------------------------------------------
int divisio(int num1, int num2)
{
	return num1/num2;
}
