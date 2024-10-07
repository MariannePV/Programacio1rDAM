//============================================================================
// Name        : A04MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct NODE {
	int valor;
	NODE *seg;
};

class PILA {
	private:
		NODE *darrer_registre;
		bool _error;
		int comptador;
	public:
		PILA();
		~PILA();
		void push(int element);
		void pop();
		int top();
		int ptop();
		bool buida();
		bool error();
		int total();
};

PILA::PILA()
{
	darrer_registre = NULL;
	_error = false;
	comptador = 0;
}

PILA::~PILA()
{
	while (!buida())
		pop();
}

void PILA::push(int element)
{
	NODE *auxiliar = 0;

	if((auxiliar=new(NODE)) == NULL)
		_error = true;
	else
	{
		_error = false;
		auxiliar -> valor = element;
		auxiliar -> seg = darrer_registre;
		darrer_registre = auxiliar;
		comptador++;
	}
}

void PILA::pop()
{
	NODE *auxiliar = darrer_registre;

	if(buida())
		_error = true;
	else
	{
		_error = false;
		darrer_registre = darrer_registre -> seg;
		delete auxiliar;
		comptador--;
	}
}

int PILA::top()
{
	if(!buida())
		return darrer_registre -> valor;
	else
	{
		_error = true;
		return -1;
	}
}

int PILA::ptop()
{
	if(buida())
		_error = true;
	else
	{
		_error = false;
		int temporal = top();
		pop();
		return temporal;
		comptador--;
	}
	return -1;
}

bool PILA::buida()
{
	return darrer_registre == NULL;
}

bool PILA::error()
{
	return _error;
}

int PILA::total()
{
	return comptador;
}

int main() {

	PILA pila_origen, pila_parells, pila_senars;

	pila_origen.push(2);
	pila_origen.push(5);
	pila_origen.push(4);
	pila_origen.push(6);
	pila_origen.push(1);
	pila_origen.push(8);
	pila_origen.push(1);

	for(int i=0; pila_origen.total() != 0; i++)
	{
		if(pila_origen.top() % 2 == 0)
		{
			pila_parells.push(pila_origen.ptop());
		}
		else
		{
			pila_senars.push(pila_origen.ptop());
		}
	}

	cout << "Total parells: " << pila_parells.total() << endl;
	cout << "Total imparells: " << pila_senars.total() << endl;

	return 0;
}









