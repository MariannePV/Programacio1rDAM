//============================================================================
// Name        : UF2_01PR07.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(funcions17) Fes una funció que mostri un menú del tipus:
1. Altes
2. Baixes
3. Modificacions
4. Consultes
I que retorni un valor numèric a partir de l’opció triada. La funció no ha de rebre cap
paràmetre.
*/

#include <iostream>
using namespace std;

int menu_opcions();
void opcions();

int main() {

	opcions();
	cout << "Has sortit del programa";
	return 0;
}

int menu_opcions()
{
	int opcio;

	do{
		cout << endl << "1.Primera opció"<< endl;
		cout << "2.Segona opció"<< endl;
		cout << "3.Tercera opció"<< endl;
		cout << "4.Quarta opció"<< endl;
		cout << "5.Sortir"<< endl;
		cin >> opcio;
	}while(opcio < 1 or opcio > 5);

	return opcio;
}

void opcions()
{
	bool sortir = false;

	do{
		switch(menu_opcions())
		{
		case 1:
			cout << "estem a la opcio 1";
			break;
		case 2:
			cout << "estem a la opcio 2";
			break;
		case 3:
			cout << "estem a la opcio 3";
			break;
		case 4:
			cout << "estem a la opcio 4";
			break;
		case 5:
			sortir=true;
			break;
		}

	}while(!sortir);
}
