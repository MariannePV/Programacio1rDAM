/*
 * compte.h
 *
 *  Created on: 25/04/2022
 *      Author: maria
 */

#include <iostream>
#include <stdio.h>

using namespace std;

#ifndef COMPTE_H_
#define COMPTE_H_

class compte
{
	private:   //atributs i mètodes privats
		string nom_titular;
		string num_compte;

	protected:
		float saldo;

	public:
		compte();
		compte(string n, float nc);
		~compte();

		void set_nom(string nom);
		string get_nom();
		void set_saldo(float s);
		float get_saldo();
		void set_numc(string nc);
		string get_numc();

		void ingressar(float quantitat);
		void reintegrar(float quantitat);

};

#endif /* COMPTE_H_ */
