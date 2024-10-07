/*
 * metodes_cercle.cpp
 *
 *  Created on: 21/04/2022
 *      Author: maria
 */

#include <stdio.h>
#include <iostream>
#include "cercle.h"

int cercle::creat = 0;

cercle::cercle()
{
	radi = 0;
	coordenades.x = 0;
	coordenades.y = 0;
	creat++;
}

cercle::~cercle()
{
	creat--;
}

double cercle::get_area()
{
	return PI * (radi * radi);
}

double cercle::get_longitud()
{
	return 2 * PI * radi;
}

coord cercle::get_coordenades()
{
	return coordenades;
}

int cercle::get_radi()
{
	return radi;
}

void cercle::set_radi(int r)
{
	radi = r;
}

void cercle::set_coordenades(coord coord)
{
	coordenades = coord;

}

int cercle::num_creats()
{
	return creat;
}
