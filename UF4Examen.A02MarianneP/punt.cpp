/*
 * punt.cpp
 *
 *  Created on: 04/05/2022
 *      Author: Marianne
 */

#include <iostream>
#include <stdio.h>
#include "punt.h"

using namespace std;

cercle::cercle()
{
	radi = 0;
	p.set_x(0);
	p.set_y(0);
}

double cercle::get_area()
{
	return PI * (radi * radi);
}

double cercle::get_longitud()
{
	return 2 * PI * radi;
}

Punt cercle::get_coordenades()
{
	return p;
}

int cercle::get_radi()
{
	return radi;
}

void cercle::set_radi(int r)
{
	radi = r;
}

void cercle::set_coordenades(Punt coord)
{
	p.set_x(coord.get_x());
	p.set_y(coord.get_y());
}

Punt::Punt()
{
	x = 0;
	y = 0;
}

void Punt::set_x(int X)
{
	x = X;
}

int Punt::get_x()
{
	return x;
}

void Punt::set_y(int Y)
{
	y = Y;
}

int Punt::get_y()
{
	return y;
}
