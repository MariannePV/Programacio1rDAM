//============================================================================
// Name        : 09PR07.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

//Arrays07 Feu un programa que ens digui si un array està ordenat de manera creixent o no

int main() {

	int taula[MAX] = {1,2,3,4,5};
	int i;
	bool creixent;

	i = 0;
	creixent = true;

	while (i<MAX-1 and creixent)
	{
		if (taula[i] <= taula[i+1])
			i++;
		else
			creixent = false;
	}

	for (i=0; i<MAX; i++)
		cout << taula[i] << " ";

	if (!creixent)
		cout << endl << "L'array no està ordenat de manera creixent";
	else
		cout << endl << "L'array està ordenat de manera creixent";


	/*if ((taula[0] <= taula[1]) and (taula[1] <= taula[2]) and (taula[2] <= taula[3]) and (taula[3] <= taula[4]))
		cout << "L'array està ordenat de manera creixent";
	else
		cout << "L'array no està ordenat de manera creixent";*/

	return 0;
}
