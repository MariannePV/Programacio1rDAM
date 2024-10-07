//============================================================================
// Name        : 11PR04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*
(strings04) Feu un programa que ens digui quantes vegades hi apareix un substring en
un string.
*/

int main() {

	string str1, substr;
	unsigned int i, j, k;
	int comptador;

	str1 = "No hi ha un més enllà, cada dia que passa hi ha un menys hi ha aquí";

	substr = "hi ha";

	comptador = 0;

	for (i = 0; i < str1.length(); i++)
	{
		if(str1[i] == substr[0])
		{
			j = 0;
			k = i;

			while (str1[k] == substr[j] and j < substr.length())
			{
				j ++;
				k ++;
			}

			if (j == substr.length())
			{
				comptador ++;
			}
		}
	}

	if (comptador > 0)
		cout << "El substr '" << substr << "' es troba " << comptador << " vegades dins el string '" << str1 << "'.";
	else
		cout << "El substr '" << substr << "' NO es troba cap vegada dins el string '" << str1 << "'.";

	return 0;
}
