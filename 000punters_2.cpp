//============================================================================
// Name        : 000punters_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

//Un punter amb permís per invair cinc pocisions de memòria = taula de cinc posicions
//Amb els punters treballem amb memòria dinàmica i amb les taules amb memòria estàtica

void omplir_taula(int t[MAX]);
void mostrar_taula(int *punt);

int *retorna_gran_petit(int t[MAX]);

int main() {

	int *p;
	int *punter;

	p=new int[MAX]; //Reserves MAX(5) adreces //En aquest moment el punter apunta a la primera adreça

	/*p++; //Ara el punter apunta a la següent adreça d'amunt

	*p = 5;

	*(p+3) = 20;

	cout << *(p+1);*/

	omplir_taula(p);

	mostrar_taula(p);

	punter=retorna_gran_petit(p);

	cout << "prova" << endl;
	cout << *(punter) << endl;
	cout << *(punter+1) << endl;

	delete [] p; //Alliberem els cinc espais de memòria que hem reservat

	return 0;
}
//--------------------------------------
void omplir_taula(int t[MAX])
{
	int i;
	for(i=0; i<MAX; i++)
	{
		t[i]=i+1;
	}
}
//--------------------------------------
void mostrar_taula(int *punt)
{
	int i;
	for(i=0; i<MAX; i++)
	{
		cout << *(punt+i) << ", ";
	}
}
//--------------------------------------
int *retorna_gran_petit(int t[MAX])
{
	int *p=new int[2]; //D'aquesta manera la taula únicament torna dues coses
	int i;

	*(p)=t[0]; //El més gran
	*(p+1)=t[0]; //El més petit

	for(i=1;i<MAX;i++)
	{
		if(t[i]>*(p))
			*(p)=t[i];
		if(t[i]>*(p))
			*(p+1)=t[i];
	}

	return p;

}
