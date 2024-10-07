/*
 * figura.h
 *
 *  Created on: 12/05/2022
 *      Author: Marianne
 */

#include <iostream>
#include <stdio.h>
using namespace std;

#ifndef FIGURA_H_
#define FIGURA_H_

const double PI = 3.141592653589793238462;

class coord
{
	public:
		int x;
		int y;
};

class figura
{
	private:
		coord coordenades;
		string color;
	public:
		figura();
		virtual ~figura();
		virtual double get_area() = 0; //L'assignament de mètode virtual només es posa al de la classe base
		void set_coordenades(coord c);
		coord get_coordenades();
		void set_color(string c);
		string get_color();
};

class cercle : public figura
{
	private:
		int radi;
	public:
		cercle(int r);
		~cercle();
		int get_radi();
		void set_radi(int r);
		double get_area();
};

class rectangle : public figura
{
	private:
		int base;
		int altura;
	public:
		rectangle(int b, int a);
		~rectangle();
		int get_base();
		void set_base(int b);
		int get_altura();
		void set_altura(int alt);
		double get_area();
};

#endif /* FIGURA_H_ */
