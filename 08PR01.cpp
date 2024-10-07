//============================================================================
// Name        : 08PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/* (for) Feu un programa al qual li entre un valor i ens ha de fer una fletxa a partir del nombre
que li entrem. El programa ha de validar amb un do..while que el nombre que li entrem és
senar.*/

int main() {

	int valor, altura, amplada, opcio;
	bool sortir;

	do
	{
		do
		{
			cout << "Introdueix un valor" << endl;
			cin >> valor;
		}	while (valor % 2 == 0);

		sortir = false;

		valor=valor/2;

		for (amplada = 0; amplada < valor; amplada++)
		{
			for (altura = 0; altura < valor; altura++)
			{
				if (altura <= amplada)
					cout << " *";
				else
					cout << " ";
			}
			cout << endl;
		}
		for (amplada = 0; amplada < valor; amplada++)
		{
			for (altura = 0; altura < valor; altura++)
			{
				if (altura <= amplada)
					cout << "";
				else
					cout << " *";
			}
			cout << endl;
		}

		cout << "Tria una opció" << endl;

		cout << "1. Continuar" << endl;
		cout << "2. Soritr" << endl;

		cin >> opcio;

		if (opcio == 2)
			sortir=true;

	}	while (!sortir);

	if (sortir)
		cout << "Has sortit del programa" << endl;

	return 0;
}
