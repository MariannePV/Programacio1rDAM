/*
 * vehicle.cpp
 *
 *  Created on: 04/05/2022
 *      Author: Marianne
 */

#include <iostream>
#include <stdio.h>
#include "vehicle.h"

using namespace std;

vehicle::vehicle()
{
	km = 0;
	matricula = "desconegut";
}

vehicle::vehicle(int k, string m)
{
	km = k;
	matricula = m;
}

int vehicle::get_km()
{
	return km;
}

void vehicle::set_km(int k)
{
	km = k;
}

string vehicle::get_matricula()
{
	return matricula;
}

void vehicle::set_matricula(string m)
{
	matricula = m;
}

cotxe::cotxe(int k, string m, bool e):vehicle(k, m), estaxi(e) {}

bool cotxe::get_estaxi()
{
	return estaxi;
}

void cotxe::set_estaxi(bool e)
{
	estaxi = e;
}
