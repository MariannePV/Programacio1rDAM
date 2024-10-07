//============================================================================
// Name        : A01MarianneP.cpp
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
		int elements();
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
		comptador --;
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

int PILA::elements()
{
	return comptador;
}

int menu();
void cos();

int main() {
	cos();
	cout << "Has sortit del programa";

	return 0;
}

int menu()
{
	int opcio;

	do{
		cout << endl << "1. Afegir element (apilar)"<< endl;
		cout << "2. Treure element (desenpila però no el mostra)"<< endl;
		cout << "3. Visualitzar top"<< endl;
		cout << "4. Visualitzar i desenpilar"<< endl;
		cout << "5. Comprovar si la pila està buida"<< endl;
		cout << "6. Elements actuals de la pila" << endl;
		cout << "7. Sortir"<< endl;
		cin >> opcio;
	}while(opcio < 1 or opcio > 7);

	return opcio;
}

void cos()
{
	bool sortir = false;
	PILA a;
	int valor;

	do{
		switch(menu())
		{
		case 1:
			cout << "Introdueix el valor" << endl;
			cin >> valor;
			a.push(valor);

			if(a.error())
			{
				cout << "ERROR: element no inserit" << endl;
			}
			else
			{
				cout << "Element inserit amb èxit" << endl;
			}

			break;
		case 2:
			a.pop();

			if(a.error())
			{
				cout << "ERROR: element no esborrat (la pila està buida)" << endl;
			}
			else
			{
				cout << "Element esborrat amb èxit" << endl;
			}

			break;
		case 3:
			a.top();

			if(a.error())
			{
				cout << "ERROR: element no trobat (la pila està buida)" << endl;
			}
			else
			{
				cout << "Valor top: " << a.top() << endl;
			}

			break;
		case 4:

			cout << "Valor top: " << a.ptop() << endl;

			if(a.error())
			{
				cout << "no hi ha cap element" << endl;
			}
			else
			{
				cout << "Element esborrat amb èxit" << endl;
			}

			break;
		case 5:
			if(a.buida())
			{
				cout << "La pila està buida" << endl;
			}
			else
			{
				cout << "La pila no està buida" << endl;
			}

			break;
		case 6:

			cout << "Número elements actuals: " << a.elements() << endl;

			if(a.error())
			{
				cout << "No hi ha cap element" << endl;
			}

			break;
		case 7:
			sortir=true;
			break;
		}

	}while(!sortir);
}
