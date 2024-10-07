//============================================================================
// Name        : UF3_03PR01.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <math.h>
#include <iostream>
#include <ctime>

using namespace std;

void array_aleatoris(int taula[], int grandaria);
void intercanvi(int &a, int &b);
void mostrar_array(int taula[], int grandaria);
int dividir(int array[], int petit, int gran);
void quickSort(int array[], int petit, int gran);
void copiar_array(int taula1[], int taula2[], int granadaria);
void bubble_sort(int taula[], int grandaria);

int main() {

	for(long int i=10000; i<=100000; i=i+10000)
	{
		int quick[i], bubble[i];
		array_aleatoris(quick, i);
		copiar_array(quick, bubble, i);



	//----------------------QuickSort-------------------------------------
		double temps_transc1;
		clock_t inici1 = clock();

		quickSort(quick, 0, i);

		clock_t final1 = clock();
		temps_transc1 = double(final1 - inici1) / CLOCKS_PER_SEC;
		cout << "Temps total del procés amb QuickSort: " << temps_transc1 << endl; //mostra el temps que hem trigat
	//--------------------------------------------------------------------


	//---------------------BubbleSort-------------------------------------
		double temps_transc2;
		clock_t inici2 = clock();

		bubble_sort(bubble, i);

		clock_t final2 = clock();
		temps_transc2 = double(final2 - inici2) / CLOCKS_PER_SEC;
		cout << "Temps total del procés amb BubbleSort: " << temps_transc2 << endl << endl; //mostra el temps que hem trigat
	}
//--------------------------------------------------------------------
	return 0;
}

void copiar_array(int taula1[], int taula2[], int grandaria)
{
	for (int i=0; i<grandaria; i++)
	{
		taula2[i] = taula1[i];
	}
}

void bubble_sort(int taula[], int grandaria)
{
	int i, j;

	for(i = 0; i <= (grandaria-1); i++)
	{
	  for(j = i+1; j <= grandaria; j++)
	  {
		 if(taula[i] > taula[j])
		 {
			intercanvi(taula[i], taula[j]);
		 }
	  }
	}
}


void array_aleatoris(int taula[], int grandaria)
{
	int i, superior=500, inferior=1;

	srand (time (NULL));

	for (i=0; i<grandaria; ++i)
	{
		taula[i]=rand() % (superior - inferior + 1) + inferior;
	}
}

void mostrar_array(int taula[], int grandaria)
{
  int i;
  for (i = 0; i < grandaria; i++)
    cout << taula[i] << " ";
  cout << endl;
}

// Quick sort
void intercanvi(int &a, int &b) //Funció swap
{
  int aux = a;
  a = b;
  b = aux;
}

int dividir(int array[], int petit, int gran)
{

  int pivot = array[gran];

  int i = (petit - 1);

  for (int j = petit; j < gran; j++) {
	if (array[j] <= pivot) {

	  i++;

	  intercanvi(array[i], array[j]);
	}
  }

  intercanvi(array[i + 1], array[gran]);

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
