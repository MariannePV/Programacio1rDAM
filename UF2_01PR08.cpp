//============================================================================
// Name        : UF2_01PR08.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
(funcions18) Aquesta funci� �s totalment diferent a les anteriors, ja que �s el propi
main qui rep par�metres. Fes un programa principal main que rebi per par�metre dos
nombres i ens digui quina �s la suma. Si no se li passen dos valors ens ha de dir que els
par�metres s�n incorrectes.
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main(int numparam, char * param[])
{
	/*
	if(numparam != 3)
	{
		cout << "error, necessito h/a i un nom" << endl;
		return 1;
	}
	else
	{
		if(strcmp(param[1],"h")==0)
		{
			cout << "hola " << param[2] << endl;
		}
		if(strcmp(param[1],"a")==0) //strcmp = compara dues cadenes de car�cters
		{
			cout << "adeu " << param[2] << endl;
		}

		if  ((strcmp(param[1],"h")!=0) and (strcmp(param[1],"a")!=0))
			cout << "primer parametre incorrecte";
	}
*/

	if(numparam != 3)
		{
			cout << "Error, necessito dos numeros" << endl;
			return 1;
		}
		else
		{
			cout << atoi(param[1]) + atoi(param[2]); //atoi = conversor de car�cters a numeros (el sistema rep els numeros com a car�cters i perqu� funcioni el programa els hem de convertir)
		}

	return 0;
}

