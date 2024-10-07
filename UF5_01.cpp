//============================================================================
// Name        : UF5_01.cpp
// Author      : 
// Version     :
// Copyright   :
// Description : Pila dinàmica
//============================================================================

#include <iostream>
using namespace std;

struct NODE { //Estructura autoreferenciada
	int valor;		//Ens guarda el valor
	NODE *seg;		//punter tipus estructura NODE que apunta a la següent adreça de memòria
};

class PILA {
	private:
		NODE *darrer_registre;
		bool _error;
	public:
		PILA();
		~PILA();
		void push(int element); //(apilar) metode per inserir un element
		void pop(); //(desapilar) metode per eliminar un element
		int top(); //top of stack metode que ens retorna el element del top
		int ptop(); //ens retorna l'element top i l'esborra (top + pop)
		bool buida(); //retorna si la pila esta o no buida
		bool error(); //metode que indicara si la ultima operacio ha donat error
};

PILA::PILA()
{
	darrer_registre = NULL;
	_error = false;
}

PILA::~PILA()
{
	while (!buida())
		pop();			//Mentres la pila no estigui buida, esborrar
}

void PILA::push(int element)		//Inserim un element dins la pila
{
	NODE *auxiliar = 0;				//Declarem punter tipus NODE (creem una nova estructura NODE)
	//També es podia fer NODE *auxiliar = new NODE;

	if((auxiliar=new(NODE)) == NULL)			//Aquí reservem la memòria
		_error = true;						//Si no la podem reservar surt un error
	else
	{
		_error = false;
		auxiliar -> valor = element;		//Assignem el valor a la nova estructura
		auxiliar -> seg = darrer_registre;	//Indiquem que el punter seg, ha d'apuntar al mateix lloc que darrer_registre
		darrer_registre = auxiliar;			//I ara darrer_registre pasa a on apuntava auxiliar
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
		cout << "6. Sortir"<< endl;
		cin >> opcio;
	}while(opcio < 1 or opcio > 6);

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
			sortir=true;
			break;
		}

	}while(!sortir);
}

