//============================================================================
// Name        : A02MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int cerca(string str);

int main() {

	string str1;

	cout << "Introdueix una paraula" << endl;
	cin >> str1;

	cout << "El string conté: " << cerca(str1) << " lletres 'a'." << endl;

	return 0;
}

int cerca(string str)
{
	int comptador = 0;
	unsigned int i;

	for (i = 0, comptador = 0; i<str.length(); i++)
	{
		if (str[i] == 'a')
			comptador ++;
	}

	return comptador;
}
