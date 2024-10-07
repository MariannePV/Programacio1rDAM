//============================================================================
// Name        : 000punters.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Els punters guarden adre�es de mem�ria

int main() {

    int n;
    int *p;

    n=9;

    p = &n;

    cout << p << endl;
    cout << * p << endl; //Un asterisc fora d'una declaraci� (int *p), vol dir: ell contingut del lloc on apunta. En aquest cas, p apunta a n, i per tant, mostrar� el cotingut de n

    *p = 200;

    p++; //Sumar 1 a un punter, incrementes en 1 l'adre�a de mem�ria (Com que el tipus de variable es int, ocupa 4 bytes, per tant augmenta en 4, tot dep�n del tipus de variable)

    cout << p << endl;

    cout << n;

    return 0;
}
