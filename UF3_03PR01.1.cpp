//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <iostream>
#include <ctime>

using namespace std;

void omplenar_nombres_aleatoris(int taula[],int superior, int inferior,int mida);
void bubble_sort(int taula[],int mida);
void selection_sort(int taula[],int mida);
void insertion_sort(int taula[], int mida);
void mostrar_taula(int taula[],int mida);
void copiar_taula(int taula1[], int taula2[], int mida);
void intercanvi(int &num1, int &num2);

int main() {

    double temps_transc;
    clock_t inici,final;

    for(long int i=1000; i<=10000; i=i+1000)
    {
        cout << endl << "Calcul Volta" << endl;

        int taula1[i], taula2[i];
        omplenar_nombres_aleatoris(taula1, 1000, 1, i);
        copiar_taula(taula1, taula2, i);

        inici = clock();
        bubble_sort(taula1, i);
        final = clock();
        temps_transc = double(final - inici) / CLOCKS_PER_SEC;
        cout << "temps 1r calcul: " << temps_transc << endl;

        inici = clock();
        insertion_sort(taula2, i);
        final = clock();
        temps_transc = double(final - inici) / CLOCKS_PER_SEC;
        cout << "temps 2n calcul: " << temps_transc << endl;
    }

    return 0;
}
//------------------------------------------------------------------------------<>
void omplenar_nombres_aleatoris(int taula[],int superior, int inferior, int posicions)
{
    srand (time (NULL));

    for (int i=0; i<posicions; i++)
    {
        taula[i]=rand() % (superior - inferior + 1) + inferior;
    }
}
//------------------------------------------------------------------------------
void bubble_sort(int taula[],int mida)
{
    int i, j;

    for(i=0; i<=(mida-1); i++)
    {
        for (j=i+1; j<=mida; j++)
        {
            if (taula[i] > taula[j])
            {
                intercanvi(taula[i], taula[j]);
            }
        }
    }
}
//------------------------------------------------------------------------------
void mostrar_taula(int taula[],int mida)
{
    for (int i=0; i<mida; i++)
    {
        cout << taula [i] << " ";
    }
}
//------------------------------------------------------------------------------
void selection_sort(int taula[],int mida)
{
    int i, j;

    for(i = 0; i<(mida-1); i++)
    {
        int min = i;

        for(j = i+1; j<mida; j++)
        {
            if (taula[j] < taula[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            intercanvi(taula[min], taula[i]);
        }
    }
}
//------------------------------------------------------------------------------
void insertion_sort(int taula[],int mida)
{
    for(int i = 1; i<mida; i++)
    {
        int current = i;
        int j = i-1;

        while (taula[j] > taula[current] && j>=0)
        {
            taula[j+1] = taula[j];
            j--;
        }
        taula[j+1] = current;
    }
}
//------------------------------------------------------------------------------
void copiar_taula(int taula1[], int taula2[], int mida)
{
    for (int i=0; i<mida; i++)
    {
        taula2[i] = taula1[i];
    }
}
//------------------------------------------------------------------------------
void intercanvi(int &num1, int &num2)
{
    int aux;

    aux = num1;
    num1 = num2;
    num2 = aux;
}
//------------------------------------------------------------------------------
