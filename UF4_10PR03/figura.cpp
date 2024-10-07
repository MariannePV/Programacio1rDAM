/*
 * figura.cpp
 *
 *  Created on: 12/05/2022
 *      Author: Marianne
 */

#include <iostream>
#include <stdio.h>
#include "figura.h"
using namespace std;

figura::figura()
{
	coordenades.x = 0;
	coordenades.y = 0;
	color = "unknown";
}

figura::~figura() {}

double figura::get_area()
{
	return 0;
}

void figura::set_coordenades(coord c)
{
	coordenades.x = c.x;
	coordenades.y = c.y;
}

coord figura::get_coordenades()
{
	return coordenades;
}

void figura::set_color(string c)
{
	color = c;
}

string figura::get_color()
{
	return color;
}

////////////////////////////////////////////////////////////////////////////////
cercle::cercle(int r)
{
	radi = r;
}

cercle::~cercle(){}

int cercle::get_radi()
{
	return radi;
}

void cercle::set_radi(int r)
{
	radi = r;
}

double cercle::get_area()
{
	return PI*radi*radi;
}

////////////////////////////////////////////////////////////////////////////////
rectangle::rectangle(int b, int a)
{
	base = b;
	altura = a;
}

rectangle::~rectangle() {}

int rectangle::get_base()
{
	return base;
}

void rectangle::set_base(int b)
{
	base = b;
}

int rectangle::get_altura()
{
	return altura;
}

void rectangle::set_altura(int alt)
{
	altura = alt;
}

double rectangle::get_area()
{
	return base*altura;
}


