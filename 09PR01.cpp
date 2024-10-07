//============================================================================
// Name        : 09PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 100
using namespace std;

/*Arrays01 Ompliu un array de 100 posicions amb números de 1 al 100 i després mostreu el seu contingut per
pantalla.*/

int main() {

	int taula[MAX];
	int i;

	for (i=0; i<MAX; i++)
	{
		taula[i]=i + 1;
	}
	for (i=0; i<MAX; i++)
	{
		cout << taula[i] << " ";
	}

	return 0;
}
