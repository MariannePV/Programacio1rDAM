//============================================================================
// Name        : 05PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//El DO WHILE és per validacions

//Suma dels naturals 1 fins al natural n, que serà llegit per teclat (1+2+3+...)

int main() {

	int n, suma, comptador;

	cout << "Introdueix un nombre" << endl;
	cin >> n;

	suma = 1;
	comptador = 1;

	do { //fes
		comptador ++;
		suma= suma + comptador;
	}	while (comptador < n); //fins que

	cout << suma;

	return 0;
}
