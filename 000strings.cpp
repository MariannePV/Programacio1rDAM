//============================================================================
// Name        : 000strings.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	/*char c1[20];
	string c2, c3;

	c2="hola";
	c3="manolito";

	cout << c2.length();
	cout << endl;
	cout << c3.length();*/

	bool trobat;
	unsigned int i;
	int comptador;

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
		cout << "Si";
	else
		cout << "no";

	for (i = 0, comptador = 0; i<str1.length(); i++)
	{
		if (str1[i] == 'a')
			comptador ++;
	}

	cout << endl << comptador;

	return 0;
}
