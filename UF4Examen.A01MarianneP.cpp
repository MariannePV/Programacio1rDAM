//============================================================================
// Name        : A01MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdio.h>

using namespace std;

class Operacions
{
	private:
		int num1;
		int num2;
	public:
		Operacions();
		~Operacions();
		int get_num1();
		void set_num1(int n1);
		int get_num2();
		void set_num2(int n2);
		int getSuma();
		int getMultiplicacio();
		int getResta();
		int getDivisio();
};

Operacions::Operacions()
{
	num1 = 0;
	num2 = 0;
}

Operacions::~Operacions() {}

int Operacions::get_num1()
{
	return num1;
}

void Operacions::set_num1(int n1)
{
	num1 = n1;
}

int Operacions::get_num2()
{
	return num2;
}

void Operacions::set_num2(int n2)
{
	num2 = n2;
}

int Operacions::getSuma()
{
	return num1 + num2;
}

int Operacions::getMultiplicacio()
{
	return num1 * num2;
}

int Operacions::getResta()
{
	return num1 - num2;
}

int Operacions::getDivisio()
{
	if(num2 == 0)
	{
		return 0;
	}
	else
	{
		return num1 / num2;
	}
}

int main() {

	Operacions op;
	int n1, n2;

	cout << "Introdueix el primer nombre" <<  endl;
	cin  >> n1;
	op.set_num1(n1);
	cout << "El primer nombre és: " << op.get_num1() << endl;

	cout << endl << "Introdueix el segon nombre" <<  endl;
	cin  >> n2;
	op.set_num2(n2);
	cout << "El segon nombre és: " << op.get_num2() << endl;

	cout << endl << "La suma dels dos nombres és: " << op.getSuma() << endl;
	cout << "La multiplicació dels dos nombres és: " << op.getMultiplicacio() << endl;
	cout << "La resta dels dos nombres és: " << op.getResta() << endl;
	cout << "La divisió dels dos nombres és: " << op.getDivisio() << endl;

	return 0;
}
