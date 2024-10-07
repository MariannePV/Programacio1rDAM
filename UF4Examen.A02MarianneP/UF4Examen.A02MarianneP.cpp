//============================================================================
// Name        : A02MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include "punt.h"

using namespace std;

int main() {

	cercle c;
	Punt pc;
	int px, py;

	cout << "Les coordenades inicials:" << endl;
	cout << "x: " << c.get_coordenades().get_x() << endl;
	cout << "y: " << c.get_coordenades().get_y() << endl;

	cout << "Escriu la coordenada x" << endl;
	cin >> px;
	cout << "Escriu la coordenada y" << endl;
	cin >> py;

	pc.set_x(px);
	pc.set_y(py);
	c.set_coordenades(pc);

	cout << "Les coordenades ara:" << endl;
	cout << "x: " << c.get_coordenades().get_x() << endl;
	cout << "y: " << c.get_coordenades().get_y() << endl;

	return 0;
}

