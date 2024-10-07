/*
 * hmultiple.cpp
 *
 *  Created on: 28/04/2022
 *      Author: maria
 */

#include <stdio.h>
#include <iostream>
#include "hmultiple.h"
using namespace std;

////////////////////////////////////////////PERSONA////////////////////////////////////////////////////

persona::persona()
{
	dni = "desconegut";
	nom = "desconegut";
	edat = 0;
}

persona::persona(string d, string n, string c, int e)
{
	dni = d;
	nom = n;
	cognom = c;
	edat = e;
}

void persona::set_dni(string d)
{
	dni = d;
}

string persona::get_dni()
{
	return dni;
}

void persona::set_nom(string n)
{
	nom = n;
}

string persona::get_nom()
{
	return nom;
}

void persona::set_edat(int e)
{
	edat = e;
}

int persona::get_edat()
{
	return edat;
}

void persona::set_cognom(string c)
{
	cognom = c;
}

string persona::get_cognom()
{
	return cognom;
}

////////////////////////////////////////////CARRERA////////////////////////////////////////////////////

carrera::carrera(string d, string n, string c, int e, int kms):persona(d, n, c, e), km_fets_carr(kms){}

void carrera::set_kms(int km)
{
	km_fets_carr = km;
}

int carrera::get_kms()
{
	return km_fets_carr;
}

int carrera::puntuacioc()
{
	return km_fets_carr * edat;
}

////////////////////////////////////////////CICLISME////////////////////////////////////////////////////

ciclisme::ciclisme(string d, string n, string c, int e, int kms, bool bm):persona(d, n, c, e), km_fets_bici(kms), bici_muntanya(bm){}

void ciclisme::set_kms(int km)
{
	km_fets_bici = km;
}

int ciclisme::get_kms()
{
	return km_fets_bici;
}

void ciclisme::set_bm(bool bm)
{
	bici_muntanya = bm;
}

bool ciclisme::get_bm()
{
	return bici_muntanya;
}

int ciclisme::puntuaciob()
{
	if(bici_muntanya)
		return km_fets_bici * edat * 2;
	else
		return km_fets_bici * edat;
}

////////////////////////////////////////////DUATLON////////////////////////////////////////////////////

duatlon::duatlon(string d, string n, string c, int e, int kmsc, int kmsb, bool bm, bool estiu):carrera(d, n, c, e, kmsc), ciclisme(d, n, c, e, kmsb, bm), fet_a_lestiu(estiu) {}

int duatlon::puntuacio_total()
{
	if(fet_a_lestiu)
		return (puntuacioc() + puntuaciob()) * 2;
	else
		return puntuacioc() + puntuaciob();
}
