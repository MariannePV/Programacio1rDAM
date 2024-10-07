/*
 * compte.cpp
 *
 *  Created on: 25/04/2022
 *      Author: maria
 */

#include <iostream>
#include <stdio.h>
#include "compte.h"

using namespace std;

compte::compte()
{
	nom_titular = "desconegut";
	saldo = 0;
}

compte::compte(string n, float nc)
{
	nom_titular = n;
	saldo = nc;
}

compte::~compte()
{

}

void compte::set_nom(string nom)
{
	nom_titular = nom;
}

string compte::get_nom()
{
	return nom_titular;
}

void compte::set_saldo(float s)
{
	saldo = s;
}

float compte::get_saldo()
{
	return saldo;
}

void compte::set_numc(string nc)
{
	num_compte = nc;
}

string compte::get_numc()
{
	return num_compte;
}

void compte::ingressar(float quantitat)
{
	saldo = saldo + quantitat;
}

void compte::reintegrar(float quantitat)
{
	saldo = saldo - quantitat;
}

