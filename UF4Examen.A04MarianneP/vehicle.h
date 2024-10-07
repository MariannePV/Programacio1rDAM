/*
 * vehicle.h
 *
 *  Created on: 04/05/2022
 *      Author: Marianne
 */

#include <iostream>
#include <stdio.h>

using namespace std;

#ifndef VEHICLE_H_
#define VEHICLE_H_

class vehicle
{
	private:
		int km;
		string matricula;
	public:
		vehicle();
		vehicle(int k, string m);
		int get_km();
		void set_km(int k);
		string get_matricula();
		void set_matricula(string m);
};

class cotxe : public vehicle
{
	private:
		bool estaxi;
	public:
		cotxe(int k, string m, bool es);
		bool get_estaxi();
		void set_estaxi(bool e);
};

#endif /* VEHICLE_H_ */
