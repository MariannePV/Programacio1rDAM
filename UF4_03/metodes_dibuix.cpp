/*
 * metodes_dibuix.cpp
 *
 *  Created on: 22/04/2022
 *      Author: maria
 */

#include <stdio.h>
#include <iostream>
#include "quadrat.h"
#include "cercle.h"
#include "dibuix.h"

using namespace std;

dibuix::dibuix()
{
	coord coordenades;
	coordenades.x = 0;
	coordenades.y = 0;

	nom = "no definit";
	q.set_coordenades(coordenades);
	q.set_costat(0);
	c.set_coordenades(coordenades);
	c.set_radi(0);
}

dibuix::dibuix(int r)
{
	coord coordenades;
	coordenades.x = 0;
	coordenades.y = 0;

	nom = "no definit";
	q.set_coordenades(coordenades);
	q.set_costat(0);
	c.set_coordenades(coordenades);
	c.set_radi(r);
}

dibuix::~dibuix()
{

}

void dibuix::set_nom(char n)
{
	nom = n;
}

string dibuix::get_nom()
{
	return nom;
}

void dibuix::dibuix_cercle_radi(int radi, coord cd, string n)
{
	c.set_radi(radi);
	c.set_coordenades(cd);
	nom = n;
	q.set_coordenades(cd);
	q.set_costat(radi*2);

}

void dibuix::dibuix_cercle_nom(cercle c1, string n)
{
	nom = n;
	c = c1;
	q.set_coordenades(c.get_coordenades());
	q.set_costat((c.get_radi())*2);
}

int dibuix::diferencia_superficie(quadrat q1, cercle c1)
{
	return q1.area_q() - c1.get_area();
}

quadrat dibuix::dibuix_quadrat()
{
	return q;
}

cercle dibuix::dibuix_cercle()
{
	return c;
}
