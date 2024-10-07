//============================================================================
// Name        : esquelet.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int menu();
void cos();
///////////////////////////////////////////
int main() {

	cos();
	cout << "Adéu";
	return 0;
}
///////////////////////////////////////////
int menu()
{
	int opcio;

	do{
		cout << endl << "1.opcio 1"<< endl;
		cout << "2.opcio 2"<< endl;
		cout << "3.opcio 3"<< endl;
		cout << "4.opcio 4"<< endl;
		cout << "5.Sortir"<< endl;
		cin >> opcio;
	}while(opcio < 1 or opcio > 5);

	return opcio;
}
///////////////////////////////////////////
void cos()
{
	bool sortir = false;

	do{
		switch(menu())
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
