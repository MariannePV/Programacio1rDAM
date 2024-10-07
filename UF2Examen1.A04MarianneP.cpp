//============================================================================
// Name        : A04MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

struct cotxe
{
	string marca;
	int km;
	int preu;
	bool ocupat;
};

void llistar(cotxe t[MAX], string marca, int km);

void mostrar_cotxe(cotxe cotxe);
void nou_cotxe(cotxe &cotxe);
void inicialitzar(cotxe t[MAX]);

int main() {

	cotxe taula[MAX];
	string marca_cotxe = "seat";
	int quilometres = 20000;

	inicialitzar(taula);

	nou_cotxe(taula[0]);
	nou_cotxe(taula[1]);
	nou_cotxe(taula[2]);

	cout << "El llistat de cotxes de model seat i amb menys de 20000 km" << endl;
	llistar(taula, marca_cotxe, quilometres);

	return 0;
}

void llistar(cotxe t[MAX], string marca, int km)
{
	for(int i=0; i<MAX; i++)
	{
		if(t[i].marca == marca and t[i].km <= km and t[i].ocupat)
		{
			cout << "-----------------" << endl;
			mostrar_cotxe(t[i]);
		}
	}
}

void mostrar_cotxe(cotxe cotxe)
{
	cout << cotxe.marca << endl;
	cout << cotxe.km << endl;
}

void nou_cotxe(cotxe &cotxe)
{
	cout << "Introdueix la marca del cotxe" << endl;
	cin >> cotxe.marca;

	cout << "Introdueix els km del cotxe" << endl;
	cin >> cotxe.km;

	cotxe.ocupat = true;
}

void inicialitzar(cotxe t[MAX])
{
	for(int i=0; i<MAX; i++)
		t[i].ocupat=false;
}
