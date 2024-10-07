/*
 * dibuix.h
 *
 *  Created on: 22/04/2022
 *      Author: maria
 */

#include <stdio.h>
#include <iostream>
#include "quadrat.h"
#include "cercle.h"

using namespace std;

#ifndef DIBUIX_H_
#define DIBUIX_H_

class dibuix
{
	private:
		string nom;
		quadrat q;
		cercle c;
	public:
		dibuix();
		dibuix(int r);
		~dibuix();
		void set_nom(char n);
		string get_nom();
		void dibuix_cercle_radi(int radi, coord cd, string n); //A partir del radi del cercle
		void dibuix_cercle_nom(cercle c1, string n); //A partir del nom del dibuix
		int diferencia_superficie(quadrat q1, cercle c1);
		quadrat dibuix_quadrat();
		cercle dibuix_cercle();
};

#endif /* DIBUIX_H_ */
