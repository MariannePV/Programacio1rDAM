//============================================================================
// Name        : 000prova_bucle_for.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	/*Al mig sempre va la condició, si no posem res, és un bucle infinit.
	Executa la primera ordre (inicialització) una vegada, examina la condició i a cada volta executa la última ordre.
	El bucle for és per recurreguts
	El bucle while es per cerques*/

	/*int i;

	for (i=0; i<100; i++)
	{
		cout << i << " ";
	}*/

	/*int i;

	for (i=0; i<100; i=i+2)
	{
		cout << i << " ";
	}*/

	/*int i, num;

	for (i=0, num=100; i<100; i++, num--)
	{
		cout << i << " " << num << "|";
	}*/

	int i, j;

	for (i=0; i<10; i++)
	{
		for (j=0; j<10; j++)
		{
			//cout << "(" << i << " " << j << ")";
			if (i == j)
				cout << "+ ";
			else
				cout << "O ";
		}
		cout << endl;
	}

	return 0;
}
