//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int num; //numero utilizat per determinar la llargada de la fletxa
	int opcio;
	bool sortir = false;
	int digit;

	int i, j;

	do{
		do{
				cout << endl << "----MENÚ PRINCIPAL-----" << endl;
				cout << "ingresa 1 si vols fer una fletxa" << endl;
				cout << "ingresa 0 si vols sortir" << endl;
				cin >> opcio;

		}while(opcio < 0 or opcio > 1);


		switch (opcio) {
		case 1:

			do{
				cout << "ingresa un numero per determinar l'alçada de la fletxa, ha de ser senar" << endl;
				cin >> num;

			}while(num % 2 == 0);

				digit = num/2;

				for (i = 1 ; i <= (digit+1); i++)
				{
					for (j = 1; j <= i and j; j++)
					{
						cout << "* ";
					}
					cout << endl;
				}

				for (i = digit ; i > 0; i--)
				{
					for (j = 1; j <= i; j++)
					{
						cout << "* ";
					}
					cout << endl;
				}
				break;

			case 0:
				sortir = true;
				break;
							}
			}while(!sortir);

		cout << "adèu" << endl;
	return 0;
}
