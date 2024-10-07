/*
 * ocells.cpp
 *
 *  Created on: 23/04/2022
 *      Author: maria
 */

#include <iostream>
#include <stdio.h>
#include "ocells.h"

using namespace std;

ocells::ocells()
{
	nom = "desconegut";
	pes = new int;
	mida = new int;
	*pes = 0;
	*mida = 0;
}
ocells::ocells(string n, int p, int m)
{
	nom = n;
	pes = new int;
	mida = new int;
	*pes = p;
	*mida = m;
}

ocells::~ocells()
{
	delete pes;
	delete mida;
}

string ocells::get_nom()
{
	return nom;
}

void ocells::set_nom(string n)
{
	nom = n;
}

int ocells::get_pes()
{
	return *mida;
}

void ocells::set_pes(int p)
{
	*pes = p;
}

int ocells::get_mida()
{
	return *pes;
}

void ocells::set_mida(int m)
{
	*mida = m;
}

ocells& ocells::operator=(ocells& punter)
{
	*pes = *punter.pes;
	*mida = *punter.mida;
	nom = punter.nom;
	return *this;
}
