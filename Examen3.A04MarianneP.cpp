//============================================================================
// Name        : A04MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct diners
{
	int bitllets_10;
	int bitllets_5;
	int euros;
};

diners operator+(diners d1, diners d2);

void omplir_diners(diners &d1);
void mostrar_diners(diners d1);

int main() {

	diners diners1, diners2, diners_resultat;

	omplir_diners(diners1);
	cout << "Ara omplirem el segon diners" << endl;
	omplir_diners(diners2);

	diners_resultat = diners1 + diners2;

	cout << "La suma dels dos diners és igual a:" << endl;

	mostrar_diners(diners_resultat);

	return 0;
}

diners operator+(diners d1, diners d2)
{
	diners aux;
	int bossa_euros;

	bossa_euros = d1.euros + (d1.bitllets_5 * 5) + (d1.bitllets_10 * 10) + d2.euros + (d2.bitllets_5 * 5) + (d2.bitllets_10 * 10);

	aux.bitllets_10 = bossa_euros / 10;
	aux.bitllets_5 = (bossa_euros % 10) / 5;
	aux.euros = bossa_euros % 5;

	return aux;
}

void omplir_diners(diners &d1)
{
	cout << "Entra els bitllets de 10" << endl;
	cin >> d1.bitllets_10;

	cout << "Entra els bitllets de 5" << endl;
	cin >> d1.bitllets_5;

	cout << "Entra les monedes d'euro" << endl;
	cin >> d1.euros;
}

void mostrar_diners(diners d1)
{
	cout << d1.bitllets_10 << " bitllets de 10" << endl;
	cout << d1.bitllets_5 << " bitllets de 5" << endl;
	cout << d1.euros << " monedes d'euro" << endl;
}
