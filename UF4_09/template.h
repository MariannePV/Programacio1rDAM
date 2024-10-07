/*
 * template.h
 *
 *  Created on: 04/05/2022
 *      Author: Marianne
 */

#include <iostream>
#include <stdio.h>
#include <stdexcept>

using namespace std;

#ifndef TEMPLATE_H_
#define TEMPLATE_H_

template <class tipus1, class tipus2> class Compte
{
	private:
		tipus1 usuari;
		tipus2 saldo;
	public:
		Compte(tipus1 u, tipus2 s);
		void set_usuari(tipus1 u);
		tipus1 get_usuari();
		void set_saldo(tipus2 s);
		tipus2 get_saldo();
};

template <class tipus1, class tipus2> Compte<tipus1, tipus2>::Compte(tipus1 u, tipus2 s)
{
	usuari = u;
	saldo = s;
}

template <class tipus1, class tipus2> void Compte<tipus1, tipus2>::set_usuari(tipus1 u)
{
	usuari = u;
}

template <class tipus1, class tipus2> tipus1 Compte<tipus1, tipus2>::get_usuari()
{
	return usuari;
}

template <class tipus1, class tipus2> void Compte<tipus1, tipus2>::set_saldo(tipus2 s)
{
	saldo = s;
}

template <class tipus1, class tipus2> tipus2 Compte<tipus1, tipus2>::get_saldo()
{
	return saldo;
}


#endif /* TEMPLATE_H_ */
