//============================================================================
// Name        : UF2_03PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Funcions 31) Estructures. Manteniment d’una taula de clients.
Es tracta de fer tot un programa complet. No només una funció.
El programa haurà de tenir diverses funcions que vosaltres decidireu crear.
Les opcions que ens donarà el menú principal seran: (altes, baixes, modificacions i consultes) de manera que
cada element de la taula, en comptes de ser un nombre enter, sigui una estructura amb els següents camps:
DNI, nom, saldo.
Quan feu una alta heu de comprovar que no existeixi un client amb aquest DNI.
Vosaltres heu de triar les funcions que voleu fer.
Si més no, heu de fer les següents funcions: altes, baixes, modificar, consultes, cercar_per_DNI,
mostrar_client, menu_principal.
Vosaltres decidiu els paràmetres que voleu passar i el que retornen les funcions.
*/

#include <iostream>
#define MAX 5
using namespace std;
//-----------------------------------------------------------------
struct client
	{
		string dni;
		string nom;
		float saldo;
		bool ocupat;
	};
//-----------------------------------------------------------------
int menu_opcions();
int menu_consultes();
void opcions(client t[MAX]);
void inicialitzar(client t[MAX]);
void donar_alta(client t[MAX]);
void donar_baixa(client t[MAX]);
void modificar(client t[MAX]);
void consultar(client t[MAX]);
int posicio_lliure(client t[MAX]);
int cercar_dni(client t[MAX], string dni_buscat);
void omplir_client(client &client, string dni_nou);
void mostrar_client(client client);
void mostrar_tots_clients(client t[MAX]);
void consulta_dni(client t[MAX]);
void consulta_nom(client t[MAX]);
void consulta_saldo(client t[MAX]);
//-----------------------------------------------------------------
int main() {

	client t[MAX];

	opcions(t);
	cout << "Has sortit del programa";
	return 0;
}
//-----------------------------------------------------------------
int menu_opcions()
{
	int opcio;

	do{
		cout << "1. Altes"<< endl;
		cout << "2. Baixes"<< endl;
		cout << "3. Modificacions"<< endl;
		cout << "4. Consultes"<< endl;
		cout << "5. Sortir"<< endl;
		cin >> opcio;
	}while(opcio < 1 or opcio > 5);

	return opcio;
}
//-----------------------------------------------------------------
void opcions(client t[MAX])
{
	bool sortir = false;

	inicialitzar(t);

	do{
		switch(menu_opcions())
		{
		case 1:
			donar_alta(t);
			break;
		case 2:
			donar_baixa(t);
			break;
		case 3:
			modificar(t);
			break;
		case 4:
			consultar(t);
			break;
		case 5:
			sortir=true;
			break;
		}

	}while(!sortir);
}
//-----------------------------------------------------------------
void donar_alta(client t[MAX])
{
	int posicio, posicio_dni; //posicio = la posició on hem trobat l'espai lliure on donarem d'alta el nou client
	string nou_dni;

	posicio = posicio_lliure(t);

	if(posicio == -1)
		cout << "Hi ha un error, no hi ha cap posició lliure";
	else
	{
		//Ara a posicio li podem inserir el nou client
		cout << "Introdueixi el DNI" << endl;
		cin >> nou_dni;
		posicio_dni = cercar_dni(t, nou_dni);

		if(posicio_dni == -1) //Si és -1, ens indica que el DNI no existeix encara i, per tant, podrem fer l'alta
		{
			omplir_client(t[posicio], nou_dni);
		}
		else
			cout << "Hi ha un error, el client ja existeix" << endl;
	}
}
//-----------------------------------------------------------------
void donar_baixa(client t[MAX])
{
	int posicio_dni;
	string nou_dni;
	char opcio;

	cout << "Introdueix el DNI del client per fer la baixa" <<  endl;
	cin >> nou_dni;
	posicio_dni = cercar_dni(t, nou_dni);

	if(posicio_dni == -1) //Si és -1, ens indica que no s'ha trobat el DNI i per tant no podem fer la baixa
	{
		cout << "Hi ha un error, client no trobat" << endl;
	}
	else
	{
		cout << "Segur que vol donar de baixa al client?" << endl;
		mostrar_client(t[posicio_dni]);
		cout << endl << "s/n" << endl;
		cin >> opcio;
		if(opcio == 's' or opcio == 'S')
		{
			t[posicio_dni].ocupat = false;
			cout << "Client donat de baixa correctament" << endl;
		}
		else
			cout << "El client no s'ha donat de baixa" << endl;
	}
}
//-----------------------------------------------------------------
void modificar(client t[MAX])
{
	int posicio_dni;
	string nou_dni;

	cout << "Introdueix el DNI del client per fer la modificació" <<  endl;
	cin >> nou_dni;
	posicio_dni = cercar_dni(t, nou_dni);

	if(posicio_dni == -1) //Si és -1, ens indica que no s'ha trobat el DNI i per tant no podem fer la modificació
	{
		cout << "Hi ha un error, client no trobat" << endl;
	}
	else
	{
		omplir_client(t[posicio_dni], nou_dni);
	}
}
//-----------------------------------------------------------------
int menu_consultes()
{
	int opcio;

	do{
		cout << "1. Consulta per DNI"<< endl;
		cout << "2. Consulta per nom"<< endl;
		cout << "3. Consulta per saldo mínim"<< endl;
		cout << "4. Mostrar tots els clients"<< endl;
		cout << "5. Tornar al menú principal"<< endl;
		cin >> opcio;
	}while(opcio < 1 or opcio > 5);

	return opcio;
}
//-----------------------------------------------------------------
void consultar(client t[MAX])
{
	bool sortir = false;

	do{
		switch(menu_consultes())
		{
		case 1:
			consulta_dni(t);
			break;
		case 2:
			consulta_nom(t);
			break;
		case 3:
			consulta_saldo(t);
			break;
		case 4:
			mostrar_tots_clients(t);
			break;
		case 5:
			sortir=true;
			break;
		}

	}while(!sortir);
}
//-----------------------------------------------------------------
void consulta_dni(client t[MAX])
{
	int posicio_dni;
	string nou_dni;

	cout << "Introdueix el DNI del client a cercar" <<  endl;
	cin >> nou_dni;
	posicio_dni = cercar_dni(t, nou_dni);

	if(posicio_dni == -1) //Si és -1, ens indica que no s'ha trobat el DNI i per tant no podem fer la consulta
	{
		cout << "Hi ha un error, client no trobat" << endl;
	}
	else
	{
		mostrar_client(t[posicio_dni]);
	}
}
//-----------------------------------------------------------------
void consulta_nom(client t[MAX])
{
	string nom_cercar;

	cout << "Introdueix el nom a cercar" << endl;
	cin >> nom_cercar;

	for(int i=0; i<MAX; i++)
	{
		if(t[i].ocupat and t[i].nom == nom_cercar)
		{
			cout << "-----------------" << endl;
			mostrar_client(t[i]);
		}
	}
}
//-----------------------------------------------------------------
void consulta_saldo(client t[MAX])
{
	int saldo_minim;

	cout << "Introdueix el saldo mínim per fer la cerca" << endl;
	cin >> saldo_minim;

	for(int i=0; i<MAX; i++)
	{
		if(t[i].ocupat and t[i].saldo >= saldo_minim)
		{
			cout << "-----------------" << endl;
			mostrar_client(t[i]);
		}
	}
}
//-----------------------------------------------------------------
void inicialitzar(client t[MAX])
{
	for(int i=0; i<MAX; i++)
		t[i].ocupat=false;
}
//-----------------------------------------------------------------
void omplir_client(client &client, string dni_nou)
{
	client.dni= dni_nou;

	cout << "Introdueix el nom" << endl;
	cin >> client.nom;

	cout << "Introdueix el saldo" << endl;
	cin >> client.saldo;

	client.ocupat = true;
}
//-----------------------------------------------------------------
int posicio_lliure(client t[MAX])
{
	bool trobat = false;
	int i=0;

	while(!trobat and i<MAX)
	{
		if(!t[i].ocupat)
			trobat = true;
		else
			i++;
	}

	if(trobat)
		return i; //Ens retorna la posició on ha trobat l'espai lliure
	else
		return -1; //Si ens retorna el -1, sabrem que la taula està plena
}
//-----------------------------------------------------------------
int cercar_dni(client t[MAX], string dni_buscat)
{
	bool trobat = false;
	int i=0;

	while(!trobat and i<MAX)
	{
		if(t[i].ocupat and t[i].dni == dni_buscat)
			trobat = true;
		else
			i++;
	}

	if(trobat)
		return i; //Ens retorna la posició on ha trobat el DNI
	else
		return -1; //Si ens retorna el -1, sabrem que no ha trobat el DNI
}
//-----------------------------------------------------------------
void mostrar_client(client client)
{
	cout << client.dni << endl;
	cout << client.nom << endl;
	cout << client.saldo << endl;
}
//-----------------------------------------------------------------
void mostrar_tots_clients(client t[MAX])
{
	for(int i=0; i<MAX; i++)
	{
		if(t[i].ocupat)
		{
			cout << "-----------------" << endl;
			mostrar_client(t[i]);
		}
	}
}
