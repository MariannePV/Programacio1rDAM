//============================================================================
// Name        : UF2_06PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Fes una funció recursiva que trobi el valor del terme n de Fibonacci.
Penseu que el cas final és quan es tracta d’un dels dos primers termes, o sigui quan n
és menor o igual a 2
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
	if(n<=2)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}
