//============================================================================
// Name        : 11PR03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

/*(strings03) Feu un programa que trobi un substring dintre d’un string i ens digui la
posició on s’ha trobat.*/

int main() {

	string str1, substr;
	unsigned int i, j ,k;
	bool trobat;

	str1 = "No hi ha res més important que el superflu";

	substr = "import";

	trobat = false;

	while (!trobat and i < str1.length())
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
				trobat = true;
			}
		}
		i++;
	}

	if (trobat)
		cout << "El substr '" << substr << "' es troba dins el string '" << str1 << "'.";
	else
		cout << "El substr '" << substr << "' NO es troba dins el string '" << str1 << "'.";

	return 0;
}
