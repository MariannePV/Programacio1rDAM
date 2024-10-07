//============================================================================
// Name        : A05MarianneP.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#define MAX 5
using namespace std;

struct cotxe
	{
		int km;
		int antiguitat;
		bool ocupat;
	};

int main() {

	cotxe aux;
	cotxe taula[MAX];
	int i, opcio;
	bool trobat, sortir;

	sortir = false;

	do
	{


		cout << "Tria una opci�" << endl;
		cout << "1. Altes" << endl;
		cout << "2. Mostrar els km que fa per any cada cotxe" << endl;
		cout << "3. Dades del cotxe amb m�s km" << endl;
		cout << "4. Dades del cotxe amb m�s anys" << endl;
		cout << "5. Sortir" << endl;
		cin >> opcio;

		switch (opcio)
		{
		case 1:
			cout << "Introdueix els km del cotxe" <<  endl;
			cin >> aux.km;

			cout << "Introdueix l'antiguitat del cotxe" <<  endl;
			cin >> aux.antiguitat;

			i=0;
			trobat = false;


			while(i<MAX and !trobat)
			{
				if (!taula[i].ocupat)
				{
					trobat = true;
					taula[i] = aux;
				}
				else
					i++;
			}


			cout << "Les dades introdu�des s�n: " << endl;

			cout << "Km: "<< aux.km << endl;
			cout << "Anys: " << aux.antiguitat << endl;

			break;
		case 2:
			cout << "Taula dels Km que fa cada cotxe per any" <<  endl;

			for(i=0 ;i<MAX; i++)
			{
				if(taula[i].km != 0)
				{
					cout << "------------------------" << endl;
					cout << taula[i].km / taula[i].antiguitat << endl;
				}
			}

			break;
		case 3:
			cout << "Dades del cotxe amb m�s km" <<  endl;

			i=0;

			for (i=0; i<MAX; i++)
			{
				if (taula[i]>= taula[i+1])
					aux = taula [i];
				else
					aux = taula [i+1];
			}

			cout << aux.km << endl;

			break;
		case 4:
			cout << "Dades del cotxe amb m�s anys" << endl;

			i=0;

			for (i=0; i<MAX; i++)
			{
				if (taula[i]>= taula[i+1])
					aux = taula [i];
				else
					aux = taula [i+1];
			}

			cout << aux.antiguitat << endl;

			break;
		case 5:
			sortir = true;

			break;
		}

	}while (!sortir);

	cout << "Has sortit del programa" << endl;

	return 0;
}

