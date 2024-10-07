/*
 * quadrat.h
 *
 *  Created on: 22/04/2022
 *      Author: maria
 */

#include <stdio.h>
#include <iostream>
#include "cercle.h"

#ifndef QUADRAT_H_
#define QUADRAT_H_

class quadrat
{
	private:
		int costat;
		coord coordenades;
	public:
		quadrat();
		quadrat(coord co, int cos); //co = coordenades, cos = costat
		~quadrat();
		double perimetre_q();
		double area_q();
		coord get_coordenades();
		void set_coordenades(coord c);
		int get_costat();
		void set_costat(int ct);
};

#endif /* QUADRAT_H_ */
