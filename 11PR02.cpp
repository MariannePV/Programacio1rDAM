//============================================================================
// Name        : 11PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//(strings02) Feu un programa que trobi totes les lletres a que hi ha en un string

int main() {

	unsigned int i;
	int comptador;

	string str1;

	str1 = "hola caracola";

	for (i = 0, comptador = 0; i<str1.length(); i++)
	{
		if (str1[i] == 'a')
			comptador ++;
	}

	cout << "Dins el string '" << str1 << "' hi ha "<< comptador << " lletres a.";

	return 0;
}
