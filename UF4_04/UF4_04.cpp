//============================================================================
// Name        : UF4_04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "ocells.h"

using namespace std;

void set_mida(ocells &m);
void set_pes(ocells &p);
void set_nom(ocells &n);

int main() {
	ocells o,o2;

	o2=o;



	set_nom(o);
	set_pes(o);
	set_mida(o);
	cout << "El nom de l'ocell és " << o.get_nom() << endl;
	cout << "El pes de l'ocell és " << o.get_pes() << endl;
	cout << "La mida de l'ocell és " << o.get_mida() << endl;

	cout << endl << "EL PROGRAMA HA FINALITZAT" << endl;

	return 0;
}

void set_nom(ocells &n)
{
	string nom;

	cout << "Introdueix el nom de l'ocell" << endl;
	cin >> nom;

	n.set_nom(nom);
}

void set_pes(ocells &p)
{
	int pes;

	cout << "Introdueix el pes de l'ocell" << endl;
	cin >> pes;

	p.set_pes(pes);
}

void set_mida(ocells &m)
{
	int mida;

	cout << "Introdueix la mida de l'ocell" << endl;
	cin >> mida;

	m.set_mida(mida);
}
