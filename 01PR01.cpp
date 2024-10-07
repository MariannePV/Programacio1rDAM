// Name        : 01P01.cpp

#include <iostream>
using namespace std;

int main() {

	int edat;

	cout << "Introdueix la teva edat" << endl;
	cin >> edat;

	if (edat >= 18)
		cout << "és major d'edat" << endl;
	else
		cout << "és menor d'edat" << endl;

	return 0;
}
