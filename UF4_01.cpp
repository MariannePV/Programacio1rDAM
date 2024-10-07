//============================================================================
// Name        : UF4_01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <iostream>

using namespace std;

//Declarem la classe
class jugador
{
	private:	//atributs i mètodes privats
		string nom;
		int puntuacio;
		bool retirat;

	public:
		jugador();	//constructor
		~jugador();	//destructor

		string get_nom();	//retorna el nom de l'usuari
		void set_nom(string nom_j);	//estableix un nom a l'usuari

		int obtenir_puntuacio(); //Retorna la puntuació del jugador
		void augmentar_puntuacio();
		void disminuir_puntuacio();

		bool j_retirat(); //Ens retorna si està retirat o no
		void retirar(); //Ens serveix per determinar si el retirem o no
		bool ha_guanyat();

};

//Definim els mètodes
jugador::jugador()
{
	nom = "desconegut";
	puntuacio = 0;
	retirat = false;
}
jugador::~jugador()
{
	//El destructor només ha de funcionar si treballem amb memòria dinàmica
}

bool jugador::ha_guanyat()
{
	return puntuacio == 100;
}

string jugador::get_nom()
{
	return nom;
}
void jugador::set_nom(string nom_j)
{
	nom = nom_j;
}
int jugador::obtenir_puntuacio()
{
	return puntuacio;
}
void jugador::augmentar_puntuacio() //15 - 30 - 40 - 100
{
	if(puntuacio == 0)
		puntuacio = 15;
	else if(puntuacio == 15)
		puntuacio = 30;
	else if(puntuacio == 30)
		puntuacio = 40;
	else
		puntuacio = 100;
}
void jugador::disminuir_puntuacio()
{
	if(puntuacio == 100)
		puntuacio = 40;
	else if(puntuacio == 40)
		puntuacio = 30;
	else if(puntuacio == 30)
		puntuacio = 15;
	else
		puntuacio = 0;
}
bool jugador::j_retirat()
{
	return retirat;
}
void jugador::retirar()
{
	retirat = true;
}

//Declarem les funcions

void cos();
int menu();

int triar_jugador(jugador j1, jugador j2);
void entrar_canviar_nom(jugador &j1, jugador &j2);
void mostrar_marcadors(jugador j1, jugador j2);
bool augmentar_puntuacio(jugador &j1, jugador &j2);
void disminuir_puntuacio(jugador &j1, jugador &j2);
void retirar_jugador(jugador &j1, jugador &j2);
void consulta_retirat(jugador j1, jugador j2);

int main() {

	cos();

	cout << endl << "Has sortit del programa" << endl;

	return 0;
}

int menu()
{
	int opcio;

	do{
		cout << endl << "1. Entrar o canviar el nom dels jugadors" << endl;
		cout << "2. Mostrar marcadors" << endl;
		cout << "3. Augmentar puntuació" << endl;
		cout << "4. Disminuir puntuació" << endl;
		cout << "5. Retirar jugador" << endl;
		cout << "6. Jugador retirat" << endl;
		cout << "7. Sortir" << endl;
		cin >> opcio;
	}while(opcio < 1 or opcio > 7);

	return opcio;
}

void cos()
{
	bool sortir = false;
	jugador jg1, jg2;

	do{
		switch(menu())
		{
		case 1:
			cout << endl;
			entrar_canviar_nom(jg1, jg2);

			break;
		case 2:
			cout << endl;
			mostrar_marcadors(jg1, jg2);

			break;
		case 3:
			cout << endl;
			if(augmentar_puntuacio(jg1, jg2))
								sortir = true;


			break;
		case 4:
			cout << endl;
			disminuir_puntuacio(jg1, jg2);

			break;
		case 5:
			cout << endl;
			retirar_jugador(jg1, jg2);
				sortir = true;
			break;
		case 6:
			cout << endl;
			consulta_retirat(jg1,jg2);

			break;
		case 7:

			sortir=true;

			break;
		}

	}while(!sortir);
}

int triar_jugador(jugador j1, jugador j2)
{
	int jugador_triat;

	cout << "Amb quin jugador vols treballar?" << endl;

	cout << "1. " << j1.get_nom() << endl;
	cout << "2. " << j2.get_nom() << endl;
	cin >> jugador_triat;

	return jugador_triat;
}

void entrar_canviar_nom(jugador &j1, jugador &j2)
{
	string nom1, nom2;

	cout << "Introdueix el nom del jugador:" << j1.get_nom() << endl;
	cin >> nom1;

	j1.set_nom(nom1);

	cout << "Introdueix el nom del jugador:" << j2.get_nom() << endl;
	cin >> nom2;

	j2.set_nom(nom2);
}

void mostrar_marcadors(jugador j1, jugador j2)
{
	if(j1.obtenir_puntuacio() != j2.obtenir_puntuacio())
	{
		cout << "La puntuació de " << j1.get_nom() << " és de " << j1.obtenir_puntuacio() << endl;
		cout << "La puntuació de " << j2.get_nom() << " és de " << j2.obtenir_puntuacio() << endl;
	}
	else
	{
		cout << "La puntuació dels jugadors és IGUAL" << endl;
	}
}

bool augmentar_puntuacio(jugador &j1, jugador &j2)
{


		if(triar_jugador(j1, j2) == 1)
		{
			j1.augmentar_puntuacio();
			if(j1.ha_guanyat())
				{
					cout << "Ha guanyat el jugador " << j1.get_nom() << endl;
					return true;
				}

		}
		else
		{
			j2.augmentar_puntuacio();
			if(j2.ha_guanyat())
				{
					cout << "Ha guanyat el jugador " << j2.get_nom() << endl;
					return true;
				}
		}

		return false;
}


void disminuir_puntuacio(jugador &j1, jugador &j2)
{
	if(j1.obtenir_puntuacio() == 100)
	{
		cout << "Ha guanyat el jugador " << j1.get_nom() << endl;
	}
	else if(j2.obtenir_puntuacio() == 100)
	{
		cout << "Ha guanyat el jugador " << j2.get_nom() << endl;
	}
	else
	{
		if(triar_jugador(j1, j2) == 1)
		{
			j1.disminuir_puntuacio();
		}
		else
		{
			j2.disminuir_puntuacio();
		}
	}
}

void retirar_jugador(jugador &j1, jugador &j2)
{
	if(triar_jugador(j1, j2) == 1)
	{
		if(!j1.j_retirat())
		{
			j1.retirar();

			cout << "El jugador " << j1.get_nom() << " s'ha retirat" << endl;
		}
	}
	else
	{
		if(!j2.j_retirat())
		{
			j2.retirar();

			cout << "El jugador " << j2.get_nom() << " s'ha retirat" << endl;
		}
	}
}

void consulta_retirat(jugador j1, jugador j2)
{
	if(triar_jugador(j1, j2) == 1)
	{
		if(j1.j_retirat())
			cout << "El jugador " << j1.get_nom() << " està retirat" << endl;
		else
			cout << "El jugador " << j1.get_nom() << " NO està retirat" << endl;
	}
	else
	{
		if(j2.j_retirat())
			cout << "El jugador " << j2.get_nom() << " està retirat" << endl;
		else
			cout << "El jugador " << j2.get_nom() << " NO està retirat" << endl;
	}
}
