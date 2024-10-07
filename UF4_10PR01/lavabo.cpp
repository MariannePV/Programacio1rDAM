/*
 * lavabo.cpp
 *
 *  Created on: 29/04/2022
 *      Author: maria
 */

#include <stdio.h>
#include <iostream>
#include "lavabo.h"
using namespace std;

bool lavabo::ocupat = false;

lavabo::lavabo()
{
	nom = "desconegut";
	estic_a_dins = false;
}

lavabo::lavabo(string n)
{
	nom = n;
	estic_a_dins = false;
}

void lavabo::entrar()
{
	if(!ocupat)
	{
		estic_a_dins = true;
		ocupat = true;
	}
}

void lavabo::sortir()
{
	if(estic_a_dins)
	{
		ocupat = false;
		estic_a_dins = false;
	}
}

string lavabo::get_nom()
{
	return nom;
}

bool lavabo::esticadins()
{
	return estic_a_dins;

}

bool lavabo::hihaalgu()
{
	return ocupat;

}
