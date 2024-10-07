//============================================================================
// Name        : 000matrius.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define FILES 5
#define COLUMNES 10
using namespace std;

int main() {

	int i, j;
	int m[FILES][COLUMNES];

	for(i=0; i<FILES; i++)
	{
		for(j=0; j<COLUMNES; j++)
		{
			m[i][j]=4;
		}
	}

	int comptador=0;

	for(i=0; i<FILES; i++)
	{
		for(j=0; j<COLUMNES; j++)
		{
			if(m[i][j]==4)
				comptador++;
		}

	}

	cout << comptador;

	return 0;
}
