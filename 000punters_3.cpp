//============================================================================
// Name        : 000punters_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

//Mem�ria din�mica

int main() {

	int *p, *punt;

	p=new int;

	*p=20;

	delete p; //Alliberem la mem�ria apuntada pel punter p (el programa ja no utilitza aquesta mem�ria)

	//La idea de la mem�ria din�mica �s que trobes new i delete, vas guardant espais de mem�ria pel punter, i en vas alliberant

	//Agafa mem�ria i l'allibera segons les necessitats que tinguem

	p=new int;

	punt = p;

	return 0;
}
