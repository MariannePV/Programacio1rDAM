//============================================================================
// Name        : 000recursivitat_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

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
