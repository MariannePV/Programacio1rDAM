/*
 * punt.h
 *
 *  Created on: 04/05/2022
 *      Author: Marianne
 */

#include <iostream>
#include <stdio.h>

using namespace std;

#ifndef PUNT_H_
#define PUNT_H_

const double PI = 3.141592653589793238462;

class Punt
{
	private:
		int x;
		int y;
	public:
		Punt();
		void set_x(int X);
		int get_x();
		void set_y(int Y);
		int get_y();
};

class cercle
{
	private:
		int radi;
		Punt p;
	public:
		cercle(); //constructor
		double get_area();
		double get_longitud();
		Punt get_coordenades();
		int get_radi();
		void set_radi(int r);
		void set_coordenades(Punt coord);
};

#endif /* PUNT_H_ */
