//============================================================================
// Name        : UF2_02PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions23) Fes una funció a la qual li passem tres nombres i ens els retorna ordenats
utilitzant els paràmetres.
*/

//Passar un paràmetre per referència (&) és quan es modifica el company i l'original (n i nombre)

#include <iostream>
using namespace std;
void ordenats(int &n1, int &n2, int &n3);

int main() {

	int nombre1, nombre2, nombre3;
	cout << "Introdueix un nombre" << endl;
	cin >> nombre1;
	cout << "Introdueix un segon nombre" << endl;
	cin >> nombre2;
	cout << "Introdueix un tercer nombre" << endl;
	cin >> nombre3;

	ordenats(nombre1, nombre2, nombre3);

	cout << "Els nombres ordenats són: " << nombre1 << nombre2 << nombre3 << endl;

	return 0;
}
void ordenats(int &n1, int &n2, int &n3)
{
	int aux;

	if (n1 > n2)
	{
		aux = n1;
		n1 = n2;
		n2 = aux;
	}
	if (n2 > n3)
	{
		aux = n2;
		n2 = n3;
		n3 = aux;
	}
	if (n1 > n2)
	{
		aux = n1;
		n1 = n2;
		n2 = aux;
	}

}
