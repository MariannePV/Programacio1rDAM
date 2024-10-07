/*
 * hmultiple.h
 *
 *  Created on: 28/04/2022
 *      Author: maria
 */

#include <stdio.h>
#include <iostream>
using namespace std;

#ifndef HMULTIPLE_H_
#define HMULTIPLE_H_

class persona
{
	private:
		string dni;
		string nom;
	protected:
		int edat;
	public:
		persona();
		persona(string d, string n, int e);
		void set_dni(string d);
		string get_dni();
		void set_nom(string n);
		string get_nom();
		void set_edat(int e);
		int get_edat();
		int premi();
};

class carrera : public persona
{
	private:
		int km_fets_carr;
	public:
		carrera(string d, string nc, int e, int kms);
		void set_kms(int km);
		int get_kms();
		int puntuacioc();
};

class ciclisme : public persona
{
	private:
		int km_fets_bici;
		bool bici_muntanya;
	public:
		ciclisme(string d, string nb, int e, int kms, bool bm);
		void set_kms(int km);
		int get_kms();
		void set_bm(bool bm);
		bool get_bm();
		int puntuaciob();
		int premi();
};

class duatlon : public carrera, public ciclisme
{
	private:
		bool fet_a_lestiu;
		static int suma;
	public:
		duatlon(string d, string nc, string nb, int e, int kmsc, int kmsb, bool bm, bool estiu);
		int puntuacio_total();
		static int sumar(int n1, int n2);
};

#endif /* HMULTIPLE_H_ */











