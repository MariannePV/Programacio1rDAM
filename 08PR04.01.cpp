//============================================================================
// Name        : 01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


int main() {
int num;
    int num2;
    int num3;
    int comptador;
    int comptador2;

    do{
        cout << "ingresa el numero el qual vols saber si es capicua" << endl;
        cin >> num;

    }while(num < 1000 or num > 9999);

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

    if (num3 == num)
        cout << "el teu numero és capicua" << endl;
    else
        cout << "el teu numero no es capicua" << endl;

    return 0;
}
