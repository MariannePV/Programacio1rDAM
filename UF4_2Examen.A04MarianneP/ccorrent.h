/*
 * ccorrent.h
 *
 *  Created on: 25/04/2022
 *      Author: maria
 */

#include <iostream>
#include <stdio.h>
#include "compte.h"

using namespace std;

#ifndef CCORRENT_H_
#define CCORRENT_H_

class ccorrent : public compte
{
	private:
		int comissio;
		int tipusinteres;

	public:
		ccorrent();
		void set_comissio(int c);
		int get_comissio();
		int treure_comissio();
		void set_tipusinteres(int t);
		int get_tipusinteres();
		void ingressar_interessos();

};

#endif /* CCORRENT_H_ */
