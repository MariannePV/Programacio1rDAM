//============================================================================
// Name        : UF4_10PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Punters a objectes
//============================================================================

#include <stdio.h>
#include <iostream>
#include "lavabo.h"
using namespace std;

int main() {

	lavabo *l1 = new lavabo("David"); //Se li assigna al punter una adre�a de mem�ria
	lavabo *l2 = new lavabo("Marc");

	l1 -> entrar(); //Fem �s dels m�todes de la classe
	l2 -> entrar();

	if(l2 -> esticadins())
		cout << "He entrat" << endl;
	else
		cout << "No he pogut entrar" << endl;

	delete l1, l2; //Els punters encara existeixen per� s'ha alliberat la mem�ria que ocupaven




	return 0;
}


/*
EST�TICS

Compte_Corrent objecte_pare("pepe",1000); //objecte est�tic
Compte_Corrent *punter_del_tipusPare;
punter_del_tipusPare = & objecte_pare; //punter a un objecte est�tic //El punter apunta al contingut de l'objecte_pare
// puc fer:
cout << objecte_pare.GetNom() << endl;
cout << objecte_pare.GetSaldo() << endl;
cout << punter_del_tipusPare -> GetNom() << endl;
cout << punter_del_tipusPare -> GetSaldo() << endl;

////////////////////////////////////////////////////
DIN�MICS

Compte_Corrent *punter_pare = new Compte_Corrent(); //constructor defecte
cout << punter_pare->GetNom()<< endl;
cout << punter_pare->GetSaldo()<< endl;
delete punter_pare; //alliberem la mem�ria que ocupa l'objecte
*/
