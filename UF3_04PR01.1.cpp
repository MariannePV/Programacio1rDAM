//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <time.h>
#define MAX 10000
using namespace std;

int CercaBinaria(int taula[MAX], int element_a_cercar);
int CercaLineal(int taula[MAX], int element_a_cercar);
void omplenar_nombres_aleatoris(int taula[],int superior, int inferior);
void insertion_sort(int taula[MAX]);
int mitjana_cerques(int taula[100]);

int main() {

    int taula1[MAX];
    int num_lineals[MAX];
    int num_binaris[MAX];
    int mitjana_lineal;
    int mitjana_binaria;
    int num_random;

    omplenar_nombres_aleatoris(taula1, 1000, 1); //omples
    insertion_sort(taula1);//ordenar
    //mostrar

    srand (time (NULL));

    for (int i=0; i<=100; i++)
    {
        num_random = rand() % (1000 - 1 + 1) + 1;

        num_lineals[i] = CercaLineal(taula1, num_random);

        num_binaris[i] = CercaBinaria(taula1, num_random);
    }

    mitjana_lineal = mitjana_cerques(num_lineals);
    mitjana_binaria = mitjana_cerques(num_binaris);
    cout << "La mitjana de les cerques lineals és: " << mitjana_lineal << endl;
    cout << "La mitjana de les cerques binaries és: " << mitjana_binaria << endl;

    return 0;
}
//------------------------------------------------------------------------------
int CercaBinaria(int taula[MAX], int element_a_cercar)
{
     int primer,ultim,mig; //guardem les posicions no els valors
     bool trobat = false;
     int num_comp = 0;

     primer = 0;
     ultim = MAX - 1;

     while (primer <= ultim and !trobat)
     {
         mig = (primer + ultim)/2;
         if (taula[mig] == element_a_cercar){
             trobat = true;
         }
         else if (element_a_cercar < taula[mig]){
             ultim = mig - 1;
         }
         else{
             primer = mig + 1;
         }
         num_comp++;
     }
 return num_comp;
}
//------------------------------------------------------------------------------
void omplenar_nombres_aleatoris(int taula[],int superior, int inferior)
{
    srand (time (NULL));

    for (int i=0; i<MAX; i++)
    {
        taula[i]=rand() % (superior - inferior + 1) + inferior;
    }
}
//------------------------------------------------------------------------------
void insertion_sort(int taula[])
{
    for(int i = 1; i<MAX; i++)
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
int CercaLineal(int taula[MAX], int element_a_cercar)
{
    int num_comp = 0;
    int i=0;
    bool trobat =false ;

    while (i<MAX and !trobat)
    {
        if(taula[i] == element_a_cercar)
        {
            trobat = true;
        }
        else
        {
            i++;
        }
        num_comp++;
    }

    return num_comp;
}
//------------------------------------------------------------------------------
int mitjana_cerques(int taula[100])
{
    int total=0;

    for(int i = 0; i<100; i++)
    {
        total = taula[i] + total;

    }
    return total/100;
}
//------------------------------------------------------------------------------
