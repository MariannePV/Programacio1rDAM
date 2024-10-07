//============================================================================
// Name        : A03MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 4
using namespace std;

struct client
{
	int codi;
	int facturacio;
};

void intercanvi(client &a, client &b);
void ordenar_clients(client taula[], int grandaria);

int main() {

	client t[MAX];

	t[0].codi = 9;
	t[0].facturacio = 2000;

	t[1].codi = 8;
	t[1].facturacio = 1900;

	t[2].codi = 2;
	t[2].facturacio = 1000;

	t[3].codi = 28;
	t[3].facturacio = 1000;

	for (int i=0; i<MAX; i++)
	{
		cout << t[i].codi << " ";
		cout << t[i].facturacio << " " << endl;
	}

	cout << "-----------------" << endl;
	ordenar_clients(t, MAX);

	for (int i=0; i<MAX; i++)
	{
		cout << t[i].codi << " ";
		cout << t[i].facturacio << " " << endl;
	}

	return 0;
}

void ordenar_clients(client taula[], int grandaria)
{
	int i, j;

	for(i = 0; i <= grandaria; i++)
	{
	  for(j = i+1; j <= (grandaria-1); j++)
	  {
		 if(taula[i].codi > taula[j].codi)
		 {
			intercanvi(taula[j], taula[i]);
		 }
	  }
	}
}

void intercanvi(client &a, client &b) //Funció swap
{
  client aux;

  aux = a;
  a = b;
  b = aux;
}
