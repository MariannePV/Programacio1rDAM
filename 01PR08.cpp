//============================================================================
// Name        : 01PR08.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int anio;

	 cout << "Entra un any" << endl;
	 cin >> anio;

	 if (anio % 4 == 0 and (anio % 100 != 0 or anio % 400 == 0) )
		 cout<<"És un any de traspàs ";
	 else
		 cout<<"No és un any de traspàs ";

	return 0;
}
