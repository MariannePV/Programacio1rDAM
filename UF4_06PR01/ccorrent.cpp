/*
 * ccorrent.cpp
 *
 *  Created on: 25/04/2022
 *      Author: maria
 */

#include <iostream>
#include <stdio.h>
#include "ccorrent.h"

using namespace std;

ccorrent::ccorrent()
{
	comissio = 0;
	tipusinteres = 0;
}

ccorrent::ccorrent(string n, float nc, int c, int tpi):compte(n, nc), comissio(c), tipusinteres(tpi){}

void ccorrent::set_comissio(int c)
{
	comissio = c;
}

int ccorrent::get_comissio()
{
	return comissio;
}

int ccorrent::treure_comissio()
{
	return 3;
}

void ccorrent::set_tipusinteres(int t)
{
	tipusinteres = t;
}

int ccorrent::get_tipusinteres()
{
	return tipusinteres;
}

void ccorrent::ingressar_interessos()
{
	saldo = saldo + ((saldo * tipusinteres) / 100);

}
