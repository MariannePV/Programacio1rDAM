//============================================================================
// Name        : 000_fsobrecarregades.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int suma(int n1, int n2);
int suma(int n1, int n2, int n3);


//------------------------------------------------
int main() {

	cout << suma(5,6) << endl;

	cout << suma(5,6,5) << endl;

	return 0;
}
//------------------------------------------------
int suma(int n1, int n2)
{
	return n1+n2;
}
//------------------------------------------------
int suma(int n1, int n2, int n3)
{
	return n1+n2+n3;
}
