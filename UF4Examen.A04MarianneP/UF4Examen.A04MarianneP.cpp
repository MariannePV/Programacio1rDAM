//============================================================================
// Name        : A04MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>
#include "vehicle.h"

using namespace std;

int main() {

	cotxe c(10, "CCC", false);

	cout << "Els km: " << c.get_km() << endl;
	cout << "La matricula: " << c.get_matricula() << endl;

	if(c.get_estaxi())
	{
		cout << "El cotxe si és taxi" << endl;
	}
	else
	{
		cout << "El cotxe NO és taxi" << endl;
	}

	return 0;
}
