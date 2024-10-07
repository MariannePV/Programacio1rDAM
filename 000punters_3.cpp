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

//Memòria dinàmica

int main() {

	int *p, *punt;

	p=new int;

	*p=20;

	delete p; //Alliberem la memòria apuntada pel punter p (el programa ja no utilitza aquesta memòria)

	//La idea de la memòria dinàmica és que trobes new i delete, vas guardant espais de memòria pel punter, i en vas alliberant

	//Agafa memòria i l'allibera segons les necessitats que tinguem

	p=new int;

	punt = p;

	return 0;
}
