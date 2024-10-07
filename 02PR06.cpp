//============================================================================
// Name        : 02PR06.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	/*
	int n1=7,n2=7;

	bool prova;

	prova = true;
	prova = false;

	prova = 2>1;
	prova = 2>19;
	prova = n1==n2;

	if(prova)
		cout << "prova conté un cert";
	else
		 cout << "prova conté un fals";
	*/

	int n1, n2;
	bool igualtat;

	cout << "Introdueix un nombre" << endl;
	cin >> n1;
	cout << "Introdueix un altre nombre" << endl;
	cin >> n2;

	igualtat = (n1 == n2);

	if (igualtat)
		cout << "Els dos nombre són iguals" << endl;
	else
		cout << "Els dos nombres no són iguals" << endl;

	return 0;
}
