//============================================================================
// Name        : UF2_07PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Feu una funció recursiva que calculi un determinat terme n d’aquesta sèrie. És una
mena de Fibonacci però, en comptes de sumar dos dígits, en suma 3.
*/

#include <iostream>
using namespace std;

int fibonacci(int n);

int main() {

	int terme;

	cout << "Quin terme de fibonacci vols calcular?" << endl;
	cin >> terme;
	cout << "El terme és: " << fibonacci(terme);

	return 0;
}
int fibonacci(int n)
{
	if(n<=3)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2)+fibonacci(n-3);
}
