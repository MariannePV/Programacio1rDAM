//============================================================================
// Name        : 000prova_bucles.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
/*
Esquema de cerca: analitza fins que surt o no
Esquema de recorregut: quan has d’analitzar tot fins al final

while: cerca
for(d?): recorregut

Semàfor: entra en un lloc un sol cop i no torna a entrar.

En un bucle while, si la condició és falsa, ni entra
*/
/*
	int n = 0;
	int m=20;
	int comptador;


	comptador = 0;

	  while (n<20 and m>0) {
	    cout << n << ", ";
	    n=n+5;
	    comptador ++;
	  }

	  cout << endl << comptador;
*/
/*
	int numero;
	int acumulat;

	numero = 0;
	acumulat = 0;

	while (numero<10)
	{
		numero ++;
		acumulat = acumulat + numero;
		cout << acumulat << ", ";
	}

	cout << endl << acumulat;
*/

	int numero=3827;


	cout << numero%10 << endl;
	numero = numero /10;
	cout << numero%10 << endl;
	numero = numero /10;
	cout << numero%10 << endl;
	numero = numero /10;
	cout << numero%10 << endl;

// Enlloc de possar totes aquestes ordres, utilitzem un bucle


	return 0;
}
