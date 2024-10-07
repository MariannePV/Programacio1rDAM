// Name        : 01PR10.cpp


#include <iostream>
using namespace std;

int main() {

	int mes;

	cout << "Introdueix un mes de l'1 al 12:" << endl;
	cin >> mes;

	switch (mes) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout << "Aquest mes té 31 dies" << endl;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			cout << "Aqest mes té 30 dies" << endl;
			break;
		case 2:
			cout << "Aquest més té 28 dies" << endl;
			break;
		default:
			cout << "Valor no vàlid" << endl;
	}

	return 0;
}
