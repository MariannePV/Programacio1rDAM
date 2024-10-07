//============================================================================
// Name        : 06PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*PR0301 Utilitzant un bucle fes que un dels programes que has fet a la practica anterior tingui
un menú que demani si es vol continuar o no. (Bucle de 05PR02)
*/

int main() {

	int n, comptador, m;

	cout << "Introdueix un nombre" << endl;
	cin >> n;

	cout << "Vols continuar?" << endl;
	cout << "Marca 1 si vols i 2 si no vols" << endl;
	cin >> m;

	switch (m)
	{
	case 1:
		do {
			n=n/10;
			comptador++;
		}	while (0 < n);
		break;
	default:
		cout << "Torni a començar";
	}
	cout << comptador;

	return 0;
}
