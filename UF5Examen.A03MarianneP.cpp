//============================================================================
// Name        : A03MarianneP.cpp
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

class cua
{
	private:
		NODE *primer, *ultim; //Primer en arribar i ultim en arribar
		bool c_error;
	public:
		cua();
		~cua();
		void encua(int element);	//afegir gent a la cua
		void desencua();	//treure gent de la cua
		int cap();
		bool buida();
		bool _error();
		int dcap();	//veure cap i desencuar
};

cua::cua()
{
	primer = NULL;
	ultim = NULL;
	c_error = false;
}

cua::~cua()
{
	while(!buida())
		desencua();
}

void cua::encua(int element)
{
	NODE *auxiliar = 0;

	if(element < 0)
	{
		cout << "No es poden inserir nombres negatius" << endl;
		c_error = true;
	}
	else
	{
		if((auxiliar = new(NODE)) == NULL)
			c_error = true;
		else
		{
			c_error = false;
			auxiliar -> valor = element;

			if(buida())
			{
				ultim = auxiliar;
				primer = auxiliar;
				ultim -> seg =  NULL;
			}
			else
			{
				auxiliar -> seg = NULL;
				ultim -> seg = auxiliar;
				ultim = auxiliar;
			}
		}
	}
}

void cua::desencua()
{
	if(!buida())
	{
		NODE *auxiliar = primer;
		primer = primer -> seg;
		delete auxiliar;
	}
}

int cua::cap()
{
	if(!buida())
		return primer -> valor;
	else
		return -1;
}

bool cua::buida()
{
	return primer == NULL;
}

bool cua::_error()
{
	return c_error;
}

int cua::dcap()
{
	if(buida())
		c_error = true;
	else
	{
		c_error = false;
		int temporal = cap();
		desencua();
		return temporal;
	}

	return -1;
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
		cout << endl << "1. Encuar (afegir a la cua)"<< endl;
		cout << "2. Desencuar"<< endl;
		cout << "3. Visualitzar cap"<< endl;
		cout << "4. Es buida?"<< endl;
		cout << "5. Veure cap i desencuar"<< endl;
		cout << "6. Sortir"<< endl;
		cin >> opcio;
	}while(opcio < 1 or opcio > 6);

	return opcio;
}

void cos()
{
	bool sortir = false;
	cua a;
	int valor;

	do{
		switch(menu())
		{
		case 1:	//encuar
			cout << "Introdueix el valor" << endl;
			cin >> valor;
			a.encua(valor);

			if(a._error())
			{
				cout << "ERROR: element no encuat" << endl;
			}
			else
			{
				cout << "Element encuat amb èxit" << endl;
			}

			break;
		case 2:	//desencuar
			a.desencua();

			if(a._error())
			{
				cout << "ERROR: element no desencuat (cua buida)" << endl;
			}
			else
			{
				cout << "Element deesencuat amb èxit" << endl;
			}

			break;
		case 3:	//veure cap
			a.cap();

			if(a._error())
			{
				cout << "ERROR: element no trobat" << endl;
			}
			else
			{
				cout << "Valor cap: " << a.cap() << endl;
			}

			break;
		case 4:	//es buida?

			if(a.buida())
			{
				cout << "La cua està buida" << endl;
			}
			else
			{
				cout << "La cua no està buida" << endl;
			}

			break;
		case 5:	//veure cap i desencuar
			cout << "Cap: " << a.dcap() << endl;

			if(a._error())
			{
				cout << "no hi ha cap element" << endl;
			}
			else
			{
				cout << "Element esborrat amb èxit" << endl;
			}

			break;
		case 6:
			sortir=true;
			break;
		}

	}while(!sortir);
}
