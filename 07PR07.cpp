//============================================================================
// Name        : 07PR07.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*Fes un programa que ens doni a triar si volem fer un quadrat, un triangle rectangle o una línia en diagonal. I
ens demani la mida (el nombre d’asteriscos que han de sortir).*/

int main() {

	int mida, opcio, altura, amplada;
	bool sortir;

	do
	{
		cout << "Tria entre les següents opcions" << endl;
		cout << "1. Fer un quadrat" << endl;
		cout << "2. Fer un triangle rectangle" << endl;
		cout << "3. Fer una línia diagonal" << endl;
		cout << "0. Sortir" << endl;
		cin >> opcio;

		sortir = false;


		switch (opcio)
		{
		case 1:
			cout << endl << "Introdueix la mida" << endl;
			cin >> mida;
			for (amplada = 0; amplada < mida; amplada++)
			{
				for (altura = 0; altura < mida; altura++)
				{
					cout << " *";
				}
				cout << endl;
			}
			break;
		case 2:
			cout << endl << "Introdueix la mida" << endl;
			cin >> mida;
			for (amplada = 0; amplada < mida; amplada++)
			{
				for (altura = 0; altura < mida; altura++)
				{
					if (altura <= amplada)
						cout << " *";
					else
						cout << " ";
				}
				cout << endl;
			}
			break;
		case 3:
			cout << "Introdueix la mida" << endl;
			cin >> mida;
			for (amplada = 0; amplada < mida; amplada++)
			{
				for (altura = 0; altura < mida; altura++)
				{
					if (amplada == altura)
						cout << "*";
					else
						cout << "  ";
				}
				cout << endl;
			}
			break;
		case 0:
			sortir = true;
			break;
		default:
			cout << "Valor no acceptat" << endl;
		}
	}	while (!sortir);

	cout << "Has sortit del programa";


	return 0;
}
