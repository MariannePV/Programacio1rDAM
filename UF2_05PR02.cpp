//============================================================================
// Name        : UF2_05PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions sobrecarregades) Feu una funció a la qual li passem una taula de clients (amb els camps dni,
nom i saldo) i un altre camp que pot ser un enter o un string. La funció llistarà els clients per nom o per
saldo mínim a partir del que li enviem al segon paràmetre.
*/

#include <iostream>
#define MAX 5
using namespace std;

struct client
{
	string dni;
	string nom;
	int saldo;
	bool ocupat;
};

void llistar(client t[MAX], int saldo);
void llistar(client t[MAX], string nom);

void mostrar_client(client client);
void nou_client(client &client, string dni_nou);
void inicialitzar(client t[MAX]);

int main() {

	client taula[MAX];
	int saldo;
	string nom;
	int opcio;

	inicialitzar(taula);

	nou_client(taula[0], "111");
	nou_client(taula[1], "222");
	nou_client(taula[2], "333");


	cout << "Triï una opció" << endl;
	cout << "1.Fer la cerca per nom" << endl;
	cout << "2.Fer la cerca per saldo mínim" << endl;
	cin >> opcio;

	switch(opcio)
	{
	case 1:
		cout << "Introdueixi el nom" << endl;
		cin >> nom;
		cout << "El llistat de clients segons el nom, és el seguent:" << endl;
		llistar(taula, nom);
	break;
	case 2:
		cout << "Introdueixi el saldo" << endl;
		cin >> saldo;
		cout << "El llistat de clients segons el saldo mínim, és el seguent:" << endl;
		llistar(taula, saldo);
	break;
	}

	return 0;
}

void llistar(client t[MAX], int saldo)
{
	for(int i=0; i<MAX; i++)
	{
		if(t[i].saldo >= saldo and t[i].ocupat)
		{
			cout << "-----------------" << endl;
			mostrar_client(t[i]);
		}
	}
}

void llistar(client t[MAX], string nom)
{
	for(int i=0; i<MAX; i++)
	{
		if(t[i].nom == nom and t[i].ocupat)
		{
			cout << "-----------------" << endl;
			mostrar_client(t[i]);
		}
	}
}

void mostrar_client(client client)
{
	cout << client.dni << endl;
	cout << client.nom << endl;
	cout << client.saldo << endl;
}

void nou_client(client &client, string dni_nou)
{
	client.dni = dni_nou;

	cout << "Introdueix el nom" << endl;
	cin >> client.nom;

	cout << "Introdueix el saldo" << endl;
	cin >> client.saldo;

	client.ocupat = true;
}

void inicialitzar(client t[MAX])
{
	for(int i=0; i<MAX; i++)
		t[i].ocupat=false;
}
