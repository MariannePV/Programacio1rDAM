//============================================================================
// Name        : A03MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>

using namespace std;

class Compte
{
	private:
		string nom;
		int *saldo;
	public:
		Compte();
		Compte(string n, int s);
		~Compte();
		string get_nom();
		void set_nom(string n);
		int get_saldo();
		void set_saldo(int s);
		Compte& operator=(Compte& punter);
};

Compte::Compte()
{
	nom = "desconegut";
	saldo = new int;
	*saldo = 0;
}

Compte::Compte(string n, int s)
{
	nom = n;
	saldo = new int;
	*saldo = s;
}

Compte::~Compte()
{
	delete saldo;
}

string Compte::get_nom()
{
	return nom;
}

void Compte::set_nom(string n)
{
	nom = n;
}

int Compte::get_saldo()
{
	return *saldo;
}

void Compte::set_saldo(int s)
{
	*saldo = s;
}

Compte& Compte::operator=(Compte& punter)
{
	*saldo = *punter.saldo;
	nom = punter.nom;
	return *this;
}

int main() {

	Compte c1("Marc", 10), c2;

	cout << c1.get_saldo() << endl;
	cout << c2.get_saldo() << endl;

	c2 = c1;

	cout << c1.get_saldo() << endl;
	cout << c2.get_saldo() << endl;

	c2.set_saldo(200);

	cout << c1.get_saldo() << endl;
	cout << c2.get_saldo() << endl;

	return 0;
}
