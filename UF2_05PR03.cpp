//============================================================================
// Name        : UF2_05PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(Sobrec�rrega d�operadors) Constru�u un operador sobrecarregat per tal de sumar dos temps expressats
en dies, hores i minuts. El resultat de la suma tamb� ha de ser en dies hores i minuts.
L'estructura ha de ser com aquesta:
struct temps
{
int dies;
int hores;
int minuts;
};
Un cop tingueu l'operador fet feu una funci� per entrar les dades del temps. Aquesta funci� la farem servir per
entrar el temps1 i el temps2 i per tant se li haur� de passar l'estructura per refer�ncia i utilitzar l'operador ->
Despr�s heu de fer una funci� que mostri per pantalla un temps. Aqu� se li passar� per valor i per tant farem
servir l'operador . (punt)
El programa b�sicament ha de sumar dos temps i donar-ne un resultat.
Les passes que ha de fer el programa s�n les seg�ents:
� Cridar� a demanar_temps per omplir el primer temps.
� Cridar� a demanar_temps per omplir el segon temps.
� Utilitzant l'operador que heu creat sumar� aquests dos temps i posar� el resultat en una altra variable.
temps_resultant = temps1 + temps2;
� Mostrar� el temps resultant.
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

	cout << "La suma dels dos temps �s igual a:" << endl;

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
