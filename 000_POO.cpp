//============================================================================
// Name        : 000_POO.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <iostream>


using namespace std;

//definició de constants


//definició de tipus i classes

//////////////////////////////////////////////
//Declaració de la classe Compte Corrent
//////////////////////////////////////////////

class Compte_Corrent
{
	private:   //atributs i mètodes privats
		string nom_titular;
		int saldo;


	public:
		Compte_Corrent(); 						//constructor
		~Compte_Corrent(); 						//destructor
		void Set_Nom(string nom); 			//estableix un nom a l'usuari
		string Get_Nom(); 							//retorna el nom de l'usuari

		int Get_Saldo();  							//retorna el saldo
		void Augmentar_Saldo(int quantitat); 	//incrementa el saldo
		void Disminuir_Saldo(int quantitat); 	//decrementa el saldo
};

//definició dels mètodes
Compte_Corrent::Compte_Corrent()
{
	nom_titular = "desconegut";
	saldo = 0;
}
Compte_Corrent::~Compte_Corrent()
{
	//de moment no fa res el destructor, perquè no treballem amb memòria dinàmica
}
void Compte_Corrent::Set_Nom(string nom)
{
	nom_titular = nom;
}
string Compte_Corrent::Get_Nom()
{
	return nom_titular;

}
int Compte_Corrent::Get_Saldo()
{
	return saldo;
}
void Compte_Corrent::Augmentar_Saldo(int quantitat)
{
	saldo = saldo + quantitat;
}
void Compte_Corrent::Disminuir_Saldo(int quantitat)
{
	saldo = saldo - quantitat;
}

//prototip de les funcions
int doble_de_saldo(Compte_Corrent c);




//punt entrada aplicació
int main(int nombre_parametres, char* parametres[])
{
Compte_Corrent a,b; //declarem dos objectes de la classe Compte_Corrent
					//s'executa el constructor


a.Set_Nom("Alex"); //el titular del compte és ara el senyor Alex
a.Augmentar_Saldo(200); //suma 200 euros al saldo del compte del senyor Alex

//no entrem cap titular
b.Disminuir_Saldo(200); //suma 200 euros al saldo del compte del senyor Alex

cout << a.Get_Nom()<<endl;
cout << a.Get_Saldo()<<endl; //mostrem el saldo i nom dels dos comptes

cout << b.Get_Nom()<<endl;
cout << b.Get_Saldo()<<endl;


if (a.Get_Saldo() > b.Get_Saldo())
	cout << "El saldo del compte a és més gran " << endl;

cout << "El doble del saldo del compte a és " << doble_de_saldo(a)<< endl;


return 0;
}

//funcions

//////////////////////////////////////////////////////////////
//Funció que retorna el doble del saldo
// li passem un objecte i ens retorna el doble del seu saldo
/////////////////////////////////////////////////////////////
int doble_de_saldo(Compte_Corrent c)
{
	return c.Get_Saldo() * 2;
}

