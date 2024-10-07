/*
 * friends.cpp
 *
 *  Created on: 12/05/2022
 *      Author: Marianne
 */

#include <iostream>
#include <stdio.h>
#include "friends.h"
using namespace std;

divisor::divisor(int d)
{
	divis = d;
}

int divisor::get_divisor()
{
	return divis;
}

void divisor::set_divisor(int d)
{
	divis = d;
}

dividend::dividend(int dvd)
{
	divid = dvd;
}

int dividend::get_dvd()
{
	return divid;
}

void dividend::set_dvd(int dvd)
{
	divid = dvd;
}
