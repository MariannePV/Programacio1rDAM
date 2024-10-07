//============================================================================
// Name        : UF2_05PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Sobrecàrrega d’operadors) Construïu un operador sobrecarregat per tal de sumar dos temps expressats
en dies, hores i minuts. El resultat de la suma també ha de ser en dies hores i minuts.
L'estructura ha de ser com aquesta:
struct temps
{
int dies;
int hores;
int minuts;
};
Un cop tingueu l'operador fet feu una funció per entrar les dades del temps. Aquesta funció la farem servir per
entrar el temps1 i el temps2 i per tant se li haurà de passar l'estructura per referència i utilitzar l'operador ->
Després heu de fer una funció que mostri per pantalla un temps. Aquí se li passarà per valor i per tant farem
servir l'operador . (punt)
El programa bàsicament ha de sumar dos temps i donar-ne un resultat.
Les passes que ha de fer el programa són les següents:
– Cridarà a demanar_temps per omplir el primer temps.
– Cridarà a demanar_temps per omplir el segon temps.
– Utilitzant l'operador que heu creat sumarà aquests dos temps i posarà el resultat en una altra variable.
temps_resultant = temps1 + temps2;
– Mostrarà el temps resultant.
*/

#include <iostream>
using namespace std;

struct temps
{
	int dies;
	int hores;
	int minuts;
};

temps operator+(temps t1, temps t2);

void omplir_temps(temps &t1);
void mostrar_temps(temps t1);


int main() {

	temps temps1, temps2, temps_resultat;

	omplir_temps(temps1);
	cout << "Ara omplirem el segon temps" << endl;
	omplir_temps(temps2);

	temps_resultat = temps1 + temps2;

	cout << "La suma dels dos temps és igual a:" << endl;

	mostrar_temps(temps_resultat);

	return 0;
}

temps operator+(temps t1, temps t2)
{
	temps aux;
	int bossa_minuts;

	bossa_minuts = t1.minuts + (t1.hores * 60) + (t1.dies * 60 * 24) + t2.minuts + (t2.hores * 60) + (t2.dies * 60 * 24);

	aux.dies = bossa_minuts / 1440;
	aux.hores = (bossa_minuts % 1440) / 60;
	aux.minuts = (bossa_minuts % 1440) % 60;

	return aux;
}

void omplir_temps(temps &t1)
{
	cout << "Entra els dies" << endl;
	cin >> t1.dies;

	cout << "Entra les hores" << endl;
	cin >> t1.hores;

	cout << "Entra els minuts" << endl;
	cin >> t1.minuts;
}

void mostrar_temps(temps t1)
{
	cout << t1.dies << " dies" << endl;
	cout << t1.hores << " hores" << endl;
	cout << t1.minuts << " minuts" << endl;
}
