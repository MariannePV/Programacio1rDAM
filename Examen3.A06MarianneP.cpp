//============================================================================
// Name        : A06MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

bool parell(int t[MAX], unsigned int i = 0);

int main() {

	int taula[MAX]={1,1,1,7,4};

	if(parell(taula))
	{
		cout << "Sí hi ha un nombre parell com a mínim dins la taula" << endl;
	}
	else
		cout << "No hi ha cap nombre parell dins la taula" << endl;

	return 0;
}

bool parell(int t[MAX], unsigned int i)
{
	if(t[i] == t[MAX])
	{
		return false;
	}
	else if(t[i] % 2 != 0)
	{
		i++;
		return parell(t, i);
	}
	else
	{
		return true;
	}
return 1;
}
