//============================================================================
// Name        : UF4_06PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <iostream>
#include "hmultiple.h"
using namespace std;

int main() {

	duatlon d1("1232A", "David", 19, 20, 40, false, true);

	cout << "El nom de l'esportista és " << d1.carrera::get_nom() << endl;
	cout << "L'edat de l'esportista és de " << d1.ciclisme::get_edat() << endl;
	cout << "La puntuació total del duatlon és de " << d1.puntuacio_total() << endl;
	cout << "La puntuació de la carrera és de " << d1.carrera::puntuacioc() << endl;
	cout << "La puntuació del ciclisme és de " << d1.ciclisme::puntuaciob() << endl;

	return 0;
}
