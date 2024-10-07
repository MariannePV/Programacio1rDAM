//============================================================================
// Name        : UF3_04PR01.cpp
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

void array_aleatoris(int taula[MAX]);
void intercanvi(int *a, int *b);
int dividir(int array[], int petit, int gran);
void quickSort(int array[], int petit, int gran);
void ordenar_taula(int taula[MAX]);
int cerca_binaria(int taula[MAX], int element_a_cercar);
int cerca_lineal(int taula[MAX], int element_a_cercar);
int mitjana(int taula[100]);

int main() {

	int taula[MAX], i;
	int num_al, superior=1000, inferior=1;
	int t_lineals[MAX], t_binaris[MAX];
	int m_binaris, m_lineals;

	array_aleatoris(taula);
	ordenar_taula(taula);

	srand (time (NULL));

	for(i=0; i<=100; i++)
	{
		num_al=rand() % (superior - inferior + 1) + inferior;

		t_binaris[i] = cerca_binaria(taula, num_al);

		t_lineals[i] = cerca_lineal(taula, num_al);
	}

	m_binaris = mitjana(t_binaris);
	m_lineals = mitjana(t_lineals);

	cout << "La mitjana amb la cerca binària és: " << m_binaris << endl;
	cout << "La mitjana amb la cerca lineal és: " << m_lineals << endl;

	return 0;
}

int mitjana(int taula[100])
{
	int i, total = 0;

	for(i=0; i<100; i++)
	{
		total = total + taula[i];
	}

	total = total/100;

	return total;
}

int cerca_lineal(int taula[MAX], int element_a_cercar)
{
	int n_comp = 0;
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
		n_comp++;
	}

	return n_comp;
}


int cerca_binaria(int taula[MAX], int element_a_cercar) //Cerca dicotòmica
{
	int primer,ultim,mig; //guardem les posicions no els valors
	bool trobat = false;
	int n_comp = 0; //Num de comparacions fetes

	primer = 0;
	ultim = MAX - 1;

	while (primer <= ultim and !trobat)
	{
		mig = (primer + ultim)/2;
		if (taula[mig] == element_a_cercar)
		{
			trobat = true;
		}
		else if (element_a_cercar < taula[mig])
		{
			ultim = mig - 1;
		}
		else
		{
			primer = mig + 1;
		}
		n_comp++;
	}

	return n_comp;
}


void array_aleatoris(int taula[MAX])
{
	int i, superior=1000, inferior=1;

	srand (time (NULL));

	for (i=0; i<MAX; ++i)
	{
		taula[i]=rand() % (superior - inferior + 1) + inferior;
	}
}

//QuickSort
void ordenar_taula(int taula[MAX])
{
	quickSort(taula, 0, MAX);
}

void intercanvi(int *a, int *b) //Funció swap
{
  int aux = *a;
  *a = *b;
  *b = aux;
}

int dividir(int array[], int petit, int gran)
{

  int pivot = array[gran];

  int i = (petit - 1);

  for (int j = petit; j < gran; j++) {
	if (array[j] <= pivot) {

	  i++;

	  intercanvi(&array[i], &array[j]);
	}
  }

  intercanvi(&array[i + 1], &array[gran]);

  return (i + 1);
}

void quickSort(int array[], int petit, int gran)
{
  if (petit < gran)
  {
	int div = dividir(array, petit, gran);

	quickSort(array, petit, div - 1);
	quickSort(array, div + 1, gran);
  }
}
