//============================================================================
// Name        : UF4_05.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include "ccorrent.h"

using namespace std;

void introduir_nom(ccorrent &c);
void introduir_numc(ccorrent &c);
void introduir_saldo(ccorrent &c);
void ingressar(ccorrent &c);
void reintegrar(ccorrent &c);
void introduir_comissio(ccorrent &c);
void introduir_tipusinteres(ccorrent &c);
void ingressar_int(ccorrent &c);

void cos();
int menu();

int main() {

	cos();
	cout << endl << "Has sortit del programa" << endl;

	return 0;
}

int menu()
{
	int opcio;

	do{
		cout << endl << "1. Introduir el nom del titular" << endl;
		cout << "2. Mostrar el nom del titular" << endl;
		cout << "3. Introduir el numero de compte" << endl;
		cout << "4. Mostrar el numero de compte" << endl;
		cout << "5. Introduir el saldo" << endl;
		cout << "6. Mostrar el saldo" << endl;
		cout << "7. Fer un ingres" << endl;
		cout << "8. Fer un reintegro" << endl;
		cout << "9. Introduir comissió" << endl;
		cout << "10. Mostrar comissio" << endl;
		cout << "11. Extreure comissió fixa" << endl;
		cout << "12. Introduir el tipus d'interes" << endl;
		cout << "13. Obtenir el tipus d'interes" << endl;
		cout << "14. Ingressar tipus d'interes" << endl;
		cout << "15. Sortir" << endl;
		cin >> opcio;
	}while(opcio < 1 or opcio > 15);

	return opcio;
}

void cos()
{
	bool sortir = false;
	ccorrent cc;

	do{
		switch(menu())
		{
		case 1:
			introduir_nom(cc);

			break;
		case 2:
			cout << endl << "El nom del titular és " << cc.get_nom() << endl;

			break;
		case 3:
			introduir_numc(cc);

			break;
		case 4:
			cout << endl << "El numero de compte és " << cc.get_numc() << endl;

			break;
		case 5:
			introduir_saldo(cc);

			break;
		case 6:
			cout << endl << "El saldo disponible és de " << cc.get_saldo() << endl;

			break;
		case 7:
			ingressar(cc);

			break;
		case 8:
			reintegrar(cc);

			break;
		case 9:
			introduir_comissio(cc);

			break;
		case 10:
			cout << endl << "La comissió actual és de " << cc.get_comissio() << endl;

			break;
		case 11:
			cout << endl << "La comissió fixa és de " << cc.treure_comissio() << endl;

			break;
		case 12:
			introduir_tipusinteres(cc);

			break;
		case 13:
			cout << endl << "El tipus d'interes és de " << cc.get_tipusinteres() << endl;

			break;
		case 14:
			cout << endl << "S'ha ingressat un percentatge d'interesos a partir del saldo i del tipus d'interes" << endl;
			ingressar_int(cc);
			break;
		case 15:
			sortir=true;

			break;
		}

	}while(!sortir);
}

void introduir_nom(ccorrent &c)
{
	string n;

	cout << "Introdueix el nom del titular del compte" << endl;
	cin >> n;

	c.set_nom(n);
}

void introduir_numc(ccorrent &c)
{
	string nc;

	cout << "Introdueix el numero del compte" << endl;
	cin >> nc;

	c.set_numc(nc);
}

void introduir_saldo(ccorrent &c)
{
	float s;

	cout << "Introdueix el saldo disponible" << endl;
	cin >> s;

	c.set_saldo(s);
}

void ingressar(ccorrent &c)
{
	float q;

	cout <<"Introdueix la quantitat que vols ingressar" << endl;
	cin >> q;

	c.ingressar(q);
}

void reintegrar(ccorrent &c)
{
	float r;

	cout <<"Introdueix la quantitat que vols reintegrar" << endl;
	cin >> r;

	c.reintegrar(r);
}

void introduir_comissio(ccorrent &c)
{
	int cm;

	cout <<"Introdueix la nova comissió" << endl;
	cin >> cm;

	c.set_comissio(cm);
}

void introduir_tipusinteres(ccorrent &c)
{
	int ti;

	cout <<"Introdueix el tipus d'interes" << endl;
	cin >> ti;

	c.set_tipusinteres(ti);
}

void ingressar_int(ccorrent &c)
{
	c.ingressar_interessos();
}
