/*
 * metodes_quadrat.cpp
 *
 *  Created on: 22/04/2022
 *      Author: maria
 */

#include <stdio.h>
#include <iostream>
#include "quadrat.h"


quadrat::quadrat()
{
	costat = 0;
	coordenades.x = 0;
	coordenades.y = 0;
}

quadrat::quadrat(coord co, int cos)
{
	costat = cos;
	coordenades = co;
}

quadrat::~quadrat()
{

}

double quadrat::perimetre_q()
{
	return 4*costat;
}

double quadrat::area_q()
{
	return costat * costat;
}

coord quadrat::get_coordenades()
{
	return coordenades;
}

void quadrat::set_coordenades(coord c)
{
	coordenades = c;
}

int quadrat::get_costat()
{
	return costat;
}

void quadrat::set_costat(int ct)
{
	costat = ct;
}
