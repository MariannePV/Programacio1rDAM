//============================================================================
// Name        : 000funcionsvideo.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

void salutacio(); //tipus void, està buit (no té cap valor), només serveix per dur a terme coses. NO ES POT FER cout << salutacio();
int doble(int num);
int suma(int n1, int n2);
void mostrar_taula(int t[MAX]);
bool cerca_en_taula(int t[MAX], int element);
int cerca_en_taula_posicio(int t[MAX], int element);

int main() {

	int n, num2, posicio;
	int taula[MAX]={5,6,3,2,4};
	n = 20;
	num2 = 15;

	salutacio();
	cout << doble(n) * 10 << endl;

	cout << suma(n, num2) << endl;

	mostrar_taula(taula);

	if(cerca_en_taula(taula,n))
		cout << "element trobat";
	else
		cout << "element no trobat";

	posicio = cerca_en_taula_posicio(taula,n);

	if(posicio != -1)
		cout << "element trobat a la posició " << posicio;
	else
		cout << "element no trobat";

	return 0;
}
//----------------------------------------------------
void salutacio()
{
	cout << "hola, com va la vida";
	cout << endl;
}
//----------------------------------------------------
int doble(int num)
{
	return num*2;
}
//----------------------------------------------------
int suma(int n1, int n2)
{
	return n1+n2;
}
//----------------------------------------------------
void mostrar_taula(int t[MAX])
{
	int i;
	for(i=0; i<MAX; i++)
		cout << t[i] << " ";

	cout << endl;
}
//----------------------------------------------------
bool cerca_en_taula(int t[MAX], int element)
{
	int i;
	bool trobat;

	i= 0;
	trobat = false;

	while (!trobat and i<MAX)
	{
		if(t[i]==element)
			trobat = true;
		else
			i++;
	}

	return trobat;
}
//----------------------------------------------------
int cerca_en_taula_posicio(int t[MAX], int element)
{
	int i;
	bool trobat;

	i= 0;
	trobat = false;

	while (!trobat and i<MAX)
	{
		if(t[i]==element)
			trobat = true;
		else
			i++;
	}

	if (trobat)
		return 1;
	else
		return -1;

	return trobat;
}

