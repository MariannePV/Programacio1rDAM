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

	cout << "El nom de l'esportista �s " << d1.carrera::get_nom() << endl;
	cout << "L'edat de l'esportista �s de " << d1.ciclisme::get_edat() << endl;
	cout << "La puntuaci� total del duatlon �s de " << d1.puntuacio_total() << endl;
	cout << "La puntuaci� de la carrera �s de " << d1.carrera::puntuacioc() << endl;
	cout << "La puntuaci� del ciclisme �s de " << d1.ciclisme::puntuaciob() << endl;

	return 0;
}
