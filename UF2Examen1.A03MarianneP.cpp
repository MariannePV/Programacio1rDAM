//============================================================================
// Name        : A03MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void suma(int n1, int n2, int &n3);

int main() {

	int num1, num2;
	int num3 = 0;

	cout << "Introdueix un nombre" << endl;
	cin >> num1;
	cout << "Introdueix un altre nombre" << endl;
	cin >> num2;

	suma(num1, num2, num3);

	cout << "La suma dels dos nombres és: " << num3 << endl;

	return 0;
}

void suma(int n1, int n2, int &n3) //  void f(int t[MAX], int &petit, int &gran)
{
	n3 = n1 + n2;
}
/*

#include <iostream>
using namespace std;

int suma(int n1, int n2);

int main() {

	int num1, num2;

	cout << "Introdueix un nombre" << endl;
	cin >> num1;
	cout << "Introdueix un altre nombre" << endl;
	cin >> num2;

	cout << "La suma dels dos nombres és: " << suma(num1, num2) << endl;

	cout << num3;

	return 0;
}

int suma(int n1, int n2)
{
	int n3;

	n3 = n1 + n2;

	return n3;
}
*/
