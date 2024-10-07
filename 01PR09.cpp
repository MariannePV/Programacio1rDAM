// Name        : 01PR09.cpp


#include <iostream>
using namespace std;

int main() {

	float n1, n2;
	int opcio;

	cout << "Introdueix un nombre" << endl;
	cin >> n1;

	cout << "Introdueix un altre nombre" << endl;
	cin >> n2;

	cout << "Tria una opció" << endl;

	cout << "1. Sumar" << endl;
	cout << "2. Multiplicar" << endl;
	cout << "3. Restar" << endl;
	cout << "4. Dividir" << endl;

	cin >> opcio;

	switch (opcio) {
		case 1:
			cout << n1 + n2 << endl;
			break;
		case 2:
			cout << n1 * n2 << endl;
			break;
		case 3:
			cout << n1 - n2 << endl;
			break;
		case 4:
			cout << n1 / n2 << endl;
			break;
		default:
			cout << "Amb aquest nombre no es pot operar" << endl;
	}

	return 0;
}
