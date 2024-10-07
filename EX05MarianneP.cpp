//============================================================================
// Name        : EX05_prova.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int mida, amplada, altura, pcreu; //pcreu = posició creu
	char creu, quadrat;

	do
	{
		cout << "Introdueix la mida" << endl;
		cin >> mida;
	}	while (mida % 2 == 0);

	cout << "Tria el caràcter per a la creu" << endl;
	cin >> creu;
	cout << "Tria el caràcter per al quadrat que envolta la creu" << endl;
	cin >> quadrat;

	pcreu = (mida / 2);

	for (amplada = 0; amplada < mida; amplada++)
	{
		for (altura = 0; altura < mida; altura++)
		{

			if (altura == pcreu or amplada == pcreu)
				cout << " " << creu;
			else
				cout << " " << quadrat;
		}
		cout << endl;
	}

	return 0;
}
