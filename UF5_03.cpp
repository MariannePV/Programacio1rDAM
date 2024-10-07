//============================================================================
// Name        : UF5_03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : llista dinàmica
//============================================================================

#include <iostream>
using namespace std;

struct NODE {
	int valor;
	NODE *seg;
};

class llista
{
	private:
		NODE *primer, *finestra;
		bool _error;
	public:
		llista();
		~llista();
		void inserir(int element);
		void esborrar();
		int consulta();
		bool fi();
		bool buida();
		void anar_al_principi();
		void avancar();
		bool error();
};

llista::llista()
{
	if((primer = new(NODE)) == NULL)
		_error = true;
	else
	{
		_error = false;
		primer -> seg = NULL;
		finestra = primer;
	}
}

llista::~llista()
{
	anar_al_principi();
	while(!buida())
		esborrar();
	delete(primer);
}

void llista::inserir(int element)
{
	NODE *aux;
	if(!(aux = new NODE))
		_error = true;
	else
	{
		_error = false;
		aux -> valor = element;
		aux -> seg = finestra -> seg;
		finestra -> seg = aux;
		avancar();
	}
}

void llista::esborrar()
{
	NODE *aux;

	if(fi())
		_error = true;
	else
	{
		_error = false;
		aux = finestra -> seg;
		finestra -> seg = aux -> seg;
		delete(aux);
	}
}

int llista::consulta()
{
	if(buida() or fi())
		_error = true;
	else
	{
		return finestra -> seg -> valor;
	}

	return -1;
}

bool llista::fi()
{
	_error = false;
	return finestra -> seg == NULL;
}

bool llista::buida()
{
	_error = false;
	return primer -> seg == NULL;
}

void llista::anar_al_principi()
{
	_error = false;
	finestra = primer;
}

void llista::avancar()
{
	if(fi())
		_error = true;
	else
	{
		_error = false;
		finestra = finestra -> seg;
	}
}

bool llista::error()
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
		cout << endl << "1. Inserir"<< endl;
		cout << "2. Esborrar"<< endl;
		cout << "3. Consulta"<< endl;
		cout << "4. Es buida?"<< endl;
		cout << "5. Avançar"<< endl;
		cout << "6. Anar al principi"<< endl;
		cout << "7. Mostrar tots els elements de la llista"<< endl;
		cout << "8. Sortir"<< endl;
		cin >> opcio;
	}while(opcio < 1 or opcio > 8);

	return opcio;
}

void cos()
{
	bool sortir = false;
	llista a;
	int valor;

	do{
		switch(menu())
		{
		case 1:	//Inserir
			cout << "Introdueix el valor" << endl;
			cin >> valor;
			a.inserir(valor);

			if(a.error())
			{
				cout << "ERROR: element no inserit" << endl;
			}
			else
			{
				cout << "Element inserit amb èxit" << endl;
			}

			break;
		case 2:	//Esborrar
			a.esborrar();

			if(a.error())
			{
				cout << "ERROR: element no esborrat" << endl;
			}
			else
			{
				cout << "Element esborrat amb èxit" << endl;
			}

			break;
		case 3:	//Consulta
			if(a.buida() or a.fi())
				cout << "No es pot visualitzar l'element" << endl;
			else
				cout << "Element: " << a.consulta() << endl;

			break;
		case 4:	//Es buida?

			if(a.buida())
			{
				cout << "Està buida" << endl;
			}
			else
			{
				cout << "No està buida" << endl;
			}

			break;
		case 5:	//Avançar
			a.avancar();
			if(a.error())
			{
				cout << "No es pot avançar" << endl;
			}
			else
			{
				cout << "S'ha avançat" << endl;
			}

			break;
		case 6:	//Anar al principi
			a.anar_al_principi();
			if(a.error())
			{
				cout << "No es pot tornar al principi" << endl;
			}
			else
			{
				cout << "Ha anat al principi" << endl;
			}

			break;
		case 7:	//Mostrar tots els elements de la llista
			if(!a.buida())
			{
				a.anar_al_principi();
				while(!a.fi())
				{
					cout << a.consulta() << ", ";
					a.avancar();
				}
				a.anar_al_principi();
			}
			else
			{
				cout << "Està buida" << endl;
			}

			break;
		case 8:
			sortir=true;
			break;
		}

	}while(!sortir);
}
