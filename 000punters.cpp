//============================================================================
// Name        : 000punters.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Els punters guarden adreçes de memòria

int main() {

    int n;
    int *p;

    n=9;

    p = &n;

    cout << p << endl;
    cout << * p << endl; //Un asterisc fora d'una declaració (int *p), vol dir: ell contingut del lloc on apunta. En aquest cas, p apunta a n, i per tant, mostrarà el cotingut de n

    *p = 200;

    p++; //Sumar 1 a un punter, incrementes en 1 l'adreça de memòria (Com que el tipus de variable es int, ocupa 4 bytes, per tant augmenta en 4, tot depèn del tipus de variable)

    cout << p << endl;

    cout << n;

    return 0;
}
