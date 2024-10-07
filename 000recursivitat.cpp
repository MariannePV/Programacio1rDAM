//============================================================================
// Name        : 000recursivitat.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

double factorial(double num);
//Per exemple, factorial de 4 = 4*3*2*1 = 24

int main() {

	double num;

	cout << "Introdueix numero per trobar-ne el factorial: " << endl;
	cin >> num;
	cout << "El factorial de " << num << " és " << factorial(num) << endl;

	return 0;
}
//El factorial de 0 és 1, per tant el cas final serà quan num = 0;
double factorial(double num) //Funció factorial = funció que es crida a ella mateixa (recursivitat)
{
	if(num == 1)
		return 1;
	else
		return num * factorial(num - 1);
}
