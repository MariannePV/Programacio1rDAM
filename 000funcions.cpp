//============================================================================
// Name        : 000funcions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void doble1 (int n);
int doble2 (int n);
int quadrat(int n);
bool major_edat (int anys);
int doble3 (int n);
void intercanvi (int &num1, int &num2);
void eldoble(int *p);

//------------------------------------------------------------------------------
int main() {

    int numero, numero2;
    numero = 9;
    cout << doble2(numero) << endl;

    numero = 20;
    doble1(numero);
    cout << endl;

    numero = 15;

    cout << quadrat(numero)<< endl;

    numero = 18;

    if (major_edat(numero))
        cout << "És major " << endl;
    else
        cout << "és menor" << endl;

    numero = 10;
    cout << doble3(numero);

    numero = 4;
    numero2 = 8;
    intercanvi(numero,numero2);

    cout << numero << endl;
    cout << numero2 << endl;

    numero = 4;
    eldoble(&numero);
    cout << numero << endl;

    return 0;
}
//------------------------------------------------------------------------------
void eldoble(int *p)
{
	*p = *p + 2;
}
//------------------------------------------------------------------------------

void doble1 (int n)
{
    cout << n*2;
}
//------------------------------------------------------------------------------
int doble2 (int n)
{
    return n*2;
}
//------------------------------------------------------------------------------
int doble3 (int n)
{
    n = n*2;
    return n;
}
//------------------------------------------------------------------------------
int quadrat (int n)
{
    return n*n;
}
//------------------------------------------------------------------------------
bool major_edat (int anys)
{
    return (anys >= 18);
}
//------------------------------------------------------------------------------
void intercanvi (int &num1, int &num2)
{
    int aux;
    aux = num1;
    num1 = num2;
    num2 = aux;
}
