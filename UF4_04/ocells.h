/*
 * ocells.h
 *
 *  Created on: 23/04/2022
 *      Author: maria
 */
#include <iostream>
#include <stdio.h>

using namespace std;

#ifndef OCELLS_H_
#define OCELLS_H_

class ocells
{
	private:
		string nom;
		int *pes;
		int *mida;

	public:
		ocells();
		ocells(string n, int p, int m);
		~ocells();
		string get_nom();
		void set_nom(string n);
		int get_pes();
		void set_pes(int p);
		int get_mida();
		void set_mida(int m);
		ocells& operator=(ocells& punter); //operador de la classe

};

#endif /* OCELLS_H_ */
