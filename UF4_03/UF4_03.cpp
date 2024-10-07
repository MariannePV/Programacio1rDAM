//============================================================================
// Name        : UF4_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <iostream>
#include "cercle.h"
#include "quadrat.h"
#include "dibuix.h"

using namespace std;

int main() {

	cercle cc;
	quadrat qu;
	dibuix dx;

	cout << dx.dibuix_cercle().get_coordenades().x;

	return 0;
}
