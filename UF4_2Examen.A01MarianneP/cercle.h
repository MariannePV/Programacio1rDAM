/*
 * cercle.h
 *
 *  Created on: 21/04/2022
 *      Author: maria
 */

#include <stdio.h>
#include <iostream>

#ifndef CERCLE_H_
#define CERCLE_H_

const double PI = 3.141592653589793238462;

struct coord
{
	int x;
	int y;
};

class cercle
{
	private:
		int radi;
		coord coordenades;
		void convertir_negatiu(int n);
		static int creat;

	public:
		cercle(); //constructor
		~cercle();
		double get_area();
		double get_longitud();
		coord get_coordenades();
		int get_radi();
		void set_radi(int r);
		void set_coordenades(coord coord);
		int num_creats();
};

#endif /* CERCLE_H_ */
