//============================================================================
// Name        : A02MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int multiplicar(int n1, int n2);
int multiplicar(int n1, int n2, int n3);

int main() {

	int num1 = 4, num2 = 5, num3 = 2;

	cout << "La multiplicaci� dels elements �s: " << multiplicar(num1, num2) << endl;;
	cout << "La multiplicaci� dels elements �s: " << multiplicar(num1, num2, num3) << endl;

	return 0;
}

int multiplicar(int n1, int n2)
{
	return n1 * n2;
}

int multiplicar(int n1, int n2, int n3)
{
	return n1 * n2 * n3;
}
