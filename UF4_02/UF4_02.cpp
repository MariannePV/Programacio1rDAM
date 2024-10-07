//============================================================================
// Name        : UF4_02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <iostream>
#include "cercle.h"

using namespace std;

void cos();
int menu();

void set_coord(cercle &c1);
void set_radi(cercle &c1);

int main() {

	cos();
	cout << endl << "Has sortit del programa" << endl;

	return 0;
}

int menu()
{
	int opcio;

	do{
		cout << endl << "1. Mostrar la longitud" << endl;
		cout << "2. Mostrar l'àrea" << endl;
		cout << "3. Mostrar el radi" << endl;
		cout << "4. Mostrar les coordenades" << endl;
		cout << "5. Introduir les coordenades" << endl;
		cout << "6. Introduir el radi" << endl;
		cout << "7. Sortir" << endl;
		cin >> opcio;
	}while(opcio < 1 or opcio > 7);

	return opcio;
}

void cos()
{
	bool sortir = false;
	cercle c;

	do{
		switch(menu())
		{
		case 1:
			cout << endl << "La longitud del cercle és de " << c.get_longitud() << endl;

			break;
		case 2:
			cout << endl << "L'àrea del cercle és de " << c.get_area() << endl;

			break;
		case 3:
			cout << endl << "El radi de la cercle és de " << c.get_radi() << endl;

			break;
		case 4:
			cout << endl << "La coordenada x del cercle és " << c.get_coordenades().x << endl;;
			cout << endl << "La coordenada y del cercle és " << c.get_coordenades().y << endl;

			break;
		case 5:
			cout << endl;
			set_coord(c);

			break;
		case 6:
			cout << endl;
			set_radi(c);

			break;
		case 7:
			sortir=true;

			break;
		}

	}while(!sortir);
}

void set_coord(cercle &c1)
{
	coord coordenades;

	cout << "Introdueix la coordenada x:" << endl;
	cin >> coordenades.x;

	cout << "Introdueix la coordenada y:" << endl;
	cin >> coordenades.y;

	c1.set_coordenades(coordenades);
}

void set_radi(cercle &c1)
{
	int r;

	cout << "Introdueix el radi:" << endl;
	cin >> r;

	c1.set_radi(r);
}


