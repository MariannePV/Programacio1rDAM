//============================================================================
// Name        : 000void_o_no_void.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int doble(int n);
void linia(int n);
void doble2(int n);

//----------------------------

int main() {
	int numero;

	numero = 5;

	cout << doble(numero) * 10<< endl;
	doble2(numero);

	cout << linia(20);





	return 0;
}

//--------------------------------
int doble(int n)
{
	return n*2;
}
//------------------------------
void linia(int n)
{
	for(int i=0; i<n; i++)
		cout << "*";
}
//--------------------------------
void doble2(int n)
{
	cout << n*2;
}



 for (i=0; i<100; i++)
 	 {
 	 	 	 if(  es_primer(t[i])  )
 	 	 	 	 	 comptador++;
 	 }
