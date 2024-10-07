/*
 * friends.h
 *
 *  Created on: 12/05/2022
 *      Author: Marianne
 */

#include <iostream>
#include <stdio.h>
using namespace std;

#ifndef FRIENDS_H_
#define FRIENDS_H_

class dividend;

class divisor
{
	friend int operacio(divisor b, dividend e);
	private:
		int divis;
	public:
		divisor(int d);
		int get_divisor();
		void set_divisor(int d);
};

class dividend
{
	friend int operacio(divisor b, dividend e);
	private:
		int divid;
	public:
		dividend(int dvd);
		int get_dvd();
		void set_dvd(int dvd);
};

#endif /* FRIENDS_H_ */
