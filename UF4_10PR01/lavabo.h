/*
 * lavabo.h
 *
 *  Created on: 29/04/2022
 *      Author: maria
 */

#include <stdio.h>
#include <iostream>
using namespace std;

#ifndef LAVABO_H_
#define LAVABO_H_

class lavabo
{
	private:
		string nom;
		bool estic_a_dins;
		static bool ocupat;
	public:
		lavabo();
		lavabo(string n);
		void entrar();
		void sortir();
		string get_nom();
		bool esticadins();
		bool hihaalgu();
};

#endif /* LAVABO_H_ */
