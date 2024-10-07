//============================================================================
// Name        : 11PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//(strings01) Feu un programa que trobi si hi ha alguna lletra a en un string

int main() {

	bool trobat;
	unsigned int i;

	string str1;

	str1 = "hola caracola";

	trobat = false;
	i=0;

	while (!trobat and i<str1.length())
	{
		if (str1[i] == 'a')
			trobat = true;
		else
			i++;
	}

	if(trobat)
		cout << "Dins el string '" << str1 << "' si hi ha alguna lletra a.";
	else
		cout << "Dins el string '" << str1 << "' no hi ha cap lletra a.";

	return 0;
}
