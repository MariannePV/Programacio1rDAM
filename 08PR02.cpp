//============================================================================
// Name        : 08PR02.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*(while) Feu un programa que capgiri un nombre. Si li entrem el 457 ens ha de sortir el 754.
El programa ha de validar amb un do..while que el nombre que li entrem té, si més no, dues
xifres.*/

#include <iostream>
using namespace std;

int main() {

    int num;
    int num2;
    int num3;
    int comptador;
    int comptador2;

    do{
        cout << "ingresa el numero el qual vols invertir" << endl;
        cin >> num;

    }while(num < 10);

    comptador2 = 1;
    num2 = num;

    while (num2 > 9)
    {
        num2 = num2 / 10;
        comptador2 = comptador2 * 10;
    }

    num2 = num;
    num3 = 0;

    while (comptador2 > 0)
    {
        comptador = num2 % 10;
        num2 = num2 / 10;
        num3 = num3 + (comptador2 * comptador);
        comptador2 = comptador2 / 10;
    }

    cout << "el teu numero invertit és: " << num3 << endl;

    return 0;
}
