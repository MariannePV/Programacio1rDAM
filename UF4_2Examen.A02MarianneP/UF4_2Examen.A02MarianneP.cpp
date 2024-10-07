//============================================================================
// Name        : UF4_2examen.A02MarianneP.cpp
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

	duatlon d1("1232A", "David", "Martin",19, 20, 40, false, true);

	cout << "El cognom de l'esportista és " << d1.carrera::get_cognom() << endl;

	return 0;
}

