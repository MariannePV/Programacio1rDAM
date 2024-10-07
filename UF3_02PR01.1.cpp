//============================================================================
// Name        : 1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

void llistar_element(string nom_fitxer)
{
	videojocs aux;
	int opcio, pos, op;
	bool tornar, entrat;

	do
	{
		cout << "1. Llistar fitxer per la seva posició" << endl;
		cout << "2. Llistar fitxer pel seu contingut" << endl;
		cout << "3. Tornar al menú principal" << endl;
		cin >> opcio;

		tornar = false;

		switch(opcio)
		{
		case 1:
		{
			cout << "Introdueix la posició de la qual vols saber-ne el contingut" << endl;
			cin >> pos;

			llegir_element(nom_fitxer, pos);
		}
			break;
		case 2:
		{
			cout << "1. Llistar els registres segons el nom" << endl;
			cout << "2. Llistar els registres segons la plataforma" << endl;
			cout << "3. Llistar els registres segons el PEGI" << endl;
			cout << "4. LListar els registres segons l'any" << endl;
			cin >> op;

			switch(op)
			{
				case 1:
				{
					cout << "Introdueix el nom" << endl;
					cin >> aux.nom;

					fstream fitxer2(nom_fitxer.c_str());
					videojocs v1;

					if (fitxer2.is_open()) //si està obert
						fitxer2.close();

					fitxer2.open(nom_fitxer.c_str(),ios::in | ios::binary); //obrim per llegir

					if(fitxer2.is_open() and v1.nom == aux.nom) //si esta obert i el nom coincideix
					{
						fitxer2.read((char *)&v1,sizeof(v1)); //llegim primer registre
						while(!fitxer2.eof()) //mentre no final fitxer
						{
							entrat = true;

							escriure_videojoc(v1);
							fitxer2.read((char *)&v1,sizeof(v1)); //llegim registre
						}
						fitxer2.close();
					}

					if (!entrat)
					{
						cout << "No hi ha cap videojoc amb aquestes característiques" << endl;
					}
				}
					break;
				case 2:
				{
					cout << "Introdueix la plataforma" << endl;
					cin >> aux.plataforma;

					fstream fitxer2(nom_fitxer.c_str());
					videojocs v1;

					if (fitxer2.is_open()) //si està obert
						fitxer2.close();

					fitxer2.open(nom_fitxer.c_str(),ios::in | ios::binary); //obrim per llegir

					if(fitxer2.is_open() and v1.plataforma == aux.plataforma) //si esta obert i el nom coincideix
					{
						fitxer2.read((char *)&v1,sizeof(v1)); //llegim primer registre
						while(!fitxer2.eof()) //mentre no final fitxer
						{
							entrat = true;

							escriure_videojoc(v1);
							fitxer2.read((char *)&v1,sizeof(v1)); //llegim registre
						}
						fitxer2.close();
					}

					if (!entrat)
					{
						cout << "No hi ha cap videojoc amb aquestes característiques" << endl;
					}
				}
					break;
				case 3:
				{
					cout << "Introdueix el PEGI" << endl;
					cin >> aux.pegi;

					fstream fitxer2(nom_fitxer.c_str());
					videojocs v1;

					if (fitxer2.is_open()) //si està obert
						fitxer2.close();

					fitxer2.open(nom_fitxer.c_str(),ios::in | ios::binary); //obrim per llegir

					if(fitxer2.is_open() and v1.pegi == aux.pegi) //si esta obert i el nom coincideix
					{
						fitxer2.read((char *)&v1,sizeof(v1)); //llegim primer registre
						while(!fitxer2.eof()) //mentre no final fitxer
						{
							entrat = true;

							escriure_videojoc(v1);
							fitxer2.read((char *)&v1,sizeof(v1)); //llegim registre
						}
						fitxer2.close();
					}

					if (!entrat)
					{
						cout << "No hi ha cap videojoc amb aquestes característiques" << endl;
					}
				}
					break;
				case 4:
				{
					cout << "Introdueix l'any de llançament" << endl;
					cin >> aux.any;

					fstream fitxer2(nom_fitxer.c_str());
					videojocs v1;

					if (fitxer2.is_open()) //si està obert
						fitxer2.close();

					fitxer2.open(nom_fitxer.c_str(),ios::in | ios::binary); //obrim per llegir

					if(fitxer2.is_open() and v1.any == aux.any) //si esta obert i el nom coincideix
					{
						fitxer2.read((char *)&v1,sizeof(v1)); //llegim primer registre
						while(!fitxer2.eof()) //mentre no final fitxer
						{
							entrat = true;

							escriure_videojoc(v1);
							fitxer2.read((char *)&v1,sizeof(v1)); //llegim registre
						}
						fitxer2.close();
					}

					if (!entrat)
					{
						cout << "No hi ha cap videojoc amb aquestes característiques" << endl;
					}
				}
					break;
			}
		}
			break;

		case 3:
		{
			tornar = true;
		}
			break;
		}
	}	while(!tornar);
}














#include <iostream>
#include <string>
#include <fstream>
using namespace std;
////////////////////////////////////////////////////////////////
struct tipoDatos
{
    char nombreFich[20];        // Nombre del fichero
    int tamanyo;              // El tamaño en bytes
};
////////////////////////////////////////////////////////////////
int menu();
void cos();
void inserir(string nom_fitxer);
void mostrar(string nom_fitxer);
void mostrar_dades(tipoDatos tipusdades);
void buscar(string nom_fitxer);
void canviar_dades(string nom_fitxer);
void copiar(string nom_fitxer, string valor);
void mostrar_copy(string copiar_fichero);
tipoDatos nova_dada();
/////////////////////////////////////////////////////////////////////////////////
int main()
{

	cos();

 return 0;
}
//////////////////////////////////////////////////////////////////////////////////
int menu()
{
	int opcion;
    do
    {
        // Menu principal
        cout << endl;
        cout << "Escoge una opción:" << endl;
        cout << "1.- Añadir datos de un nuevo fichero" << endl;
        cout << "2.- Mostrar los nombres de todos los ficheros" << endl;
        cout << "3.- Mostrar ficheros en una posicio exacta." << endl;
        cout << "4.- Substituir un fichero ya existente" << endl;
        cout << "5.- Copiar un registro en otro fichero" << endl;
        cout << "6.- Mostar registros copiados" << endl;
        cout << "7.- Salir" << endl;

        cin >> opcion;
    }while(opcion < 1 or opcion > 7);
return opcion;
}
///////////////////////////////////////////////////////////////
void cos()
{

	bool sortir = false;
        // Hacemos una cosa u otra según la opción escogida
	do{

        switch(menu())
        {
            case 1: // Añadir un dato nuevo
            	inserir("prova.dat");
                break;

            case 2: // Mostrar todos
                mostrar("prova.dat");
                break;

            case 3: // buscar por posición.
            	buscar("prova.dat");
                break;

            case 4: // canviar los datos de una posicion en concreto.
                canviar_dades("prova.dat");

                break;

            case 5://copiar las dades de un fichero a otro.
            	copiar("prova.dat","copy.dat");

            	break;

            case 6: // mostrar datos copiados.
                mostrar_copy("copy.dat");
                break;



            case 7: // Salir: avisamos de que salimos
                cout << "Fin del programa." << endl;
                sortir=true;
                break;

            default: // Otra opcion: no válida
                cout << "Opción desconocida!" << endl;
                break;
        }
    } while (!sortir);  // Si la opcion es 5, terminamos
}
///////////////////////////////////////////////////////////////
void inserir(string nom)
{
 tipoDatos p1;
 fstream fitxer(nom.c_str()); //declaració




 if (fitxer.is_open()) //si està obert el tanquem
	 	 fitxer.close();

 fitxer.open(nom.c_str(),ios::out | ios::app | ios::binary); //obrim fitxer per escriure

			if (fitxer.is_open()) //si està obert
			{
					p1= nova_dada();
					fitxer.write((const char *)&p1,sizeof(p1)); //escrivim el registre
					fitxer.close();
			}
			else
			{
				cout << "No se ha podido abrir el fichero" << endl;
			}
}
///////////////////////////////////////////////////////////////
void mostrar(string nom_de_fitxer_al_disc)
{
	 tipoDatos p1;

	fstream fitxer(nom_de_fitxer_al_disc.c_str());
if (fitxer.is_open()) //si està obert
	fitxer.close();

fitxer.open(nom_de_fitxer_al_disc.c_str(),ios::in | ios::binary); //obrim per llegir
if(fitxer.is_open()) //si esta obert
{
	fitxer.read((char *)&p1,sizeof(p1)); //llegim primer registre
	while(!fitxer.eof()) //mentre no final fitxer
	{
		mostrar_dades(p1);
		fitxer.read((char *)&p1,sizeof(p1)); //llegim registre
	}
	fitxer.close();
}

}
///////////////////////////////////////////////////////////////
void buscar(string nom_de_fitxer_al_disc)
{
	int posicio;
	int posicio1;
	tipoDatos p1;

	fstream fitxer(nom_de_fitxer_al_disc.c_str());
	if (fitxer.is_open()) //si està obert
		fitxer.close();


	fitxer.open(nom_de_fitxer_al_disc.c_str(),ios::in | ios::binary); //obrim per llegir
		cout << "Ahora escoge el sitio del fichero al cual quieres acceder " << endl;
		cin >> posicio;
		fitxer.seekg(0,ios::end);
		posicio1= fitxer.tellg()/sizeof(p1);
		if(fitxer.is_open()and posicio<=posicio1-1) //si esta obert
			{
				fitxer.seekg((posicio)*sizeof(p1),ios::beg); //beg: des del princip, cur:des de pos actual, end:des del final
				fitxer.read((char *)&p1,sizeof(p1));
				cout << "hemos ido directamente a la posición " << posicio << " fichero: " << endl;
				mostrar_dades(p1);
				fitxer.close();
			}
		else
			cout<<"posició del fichero no trobada";
}
///////////////////////////////////////////////////////////////
void copiar(string nom_de_fitxer_al_disc, string ficher_copy)
{
	int posicio;
	int posicio1;
	tipoDatos p1;

	fstream fitxer(nom_de_fitxer_al_disc.c_str());
	fstream fitxer2(ficher_copy.c_str());
	if (fitxer.is_open()) //si està obert
			fitxer.close();
	if (fitxer2.is_open()) //si està obert
			fitxer2.close();

	fitxer.open(nom_de_fitxer_al_disc.c_str(),ios::in | ios::binary); //obrim per llegir
			cout << "Ahora escoge la posicion del fichero el cual quieres copiar " << endl;
			cin >> posicio;
			fitxer.seekg(0,ios::end);
			posicio1= fitxer.tellg()/sizeof(p1);
			if(posicio>posicio1-1)
			{
				cout<<"no s'ha trobat la posicio"<<endl;
			}
			else //si esta obert
			{
				fitxer.is_open();
				fitxer.seekg((posicio)*sizeof(p1),ios::beg); //beg: des del princip, cur:des de pos actual, end:des del final
				fitxer.read((char *)&p1,sizeof(p1));
				cout << "hemos ido directamente a la posición " << posicio << " fichero: " << endl;
				mostrar_dades(p1);
				fitxer.close();

			fitxer2.open(ficher_copy.c_str(),ios::out | ios::app | ios::binary);

				fitxer2.is_open();
				fitxer2.write((const char *)&p1,sizeof(p1)); //escrivim el registre
				fitxer2.close();
				cout<<"fichero copiado."<<endl;
			}







}
///////////////////////////////////////////////////////////////////
tipoDatos nova_dada()
{
	tipoDatos nova_dada;
	cout<<"Nombre fichero"<<endl;
	cin>>nova_dada.nombreFich;
	cout<<"tamaño del fichero(kb)"<<endl;
	cin>>nova_dada.tamanyo;

return nova_dada;
}
///////////////////////////////////////////////////////////////////
void mostrar_dades(tipoDatos tipusdades)
{
	cout << "-------------" << endl;
	cout << "Nombre fichero: " << tipusdades.nombreFich << endl;
	cout << "tamaño: " << tipusdades.tamanyo << endl;
	cout << "-------------" << endl;
}
////////////////////////////////////////////////////////////////////
void canviar_dades(string nom_de_fitxer_al_disc)
{
	int posicio;
	int posicio1;
		tipoDatos p1;

	fstream fitxer(nom_de_fitxer_al_disc.c_str());
	if (fitxer.is_open()) //si està obert
		fitxer.close();

	fitxer.open(nom_de_fitxer_al_disc.c_str(),ios::in | ios::out | ios::binary ); //obrim fitxer per escriure i llegir
	cout << "Cambiaremos el fichero en un lugar en concreto: " << endl;
	p1=nova_dada();
	cout << "Escoge la posición a cambiar a partir del zero" << endl;
	cin >> posicio;
	fitxer.seekg(0,ios::end); // col·loquem el punter al principi
	posicio1= fitxer.tellg()/sizeof(p1);
	if(fitxer.is_open()and posicio<=posicio1-1)
	{
		fitxer.seekg((posicio)*sizeof(p1),ios::beg); //ens posicionem al element, ens carreguem el que hi havia
		fitxer.write((const char *)&p1,sizeof(p1));
		fitxer.close();
		cout<<"Se ha cambiado el fichero correctamente."<<endl;
	}
	else //si està obert
	{
		cout<<"No se ha encontrado el fichero a substituir en está posición."<<endl;
	}

}
////////////////////////////////////////////////////////////////////////////////////////
void mostrar_copy(string fichero_copy)
{
	tipoDatos p1;
	fstream fitxer2(fichero_copy.c_str());
	if (fitxer2.is_open()) //si està obert
	fitxer2.close();

	fitxer2.open(fichero_copy.c_str(),ios::in | ios::binary); //obrim per llegir
	if(fitxer2.is_open()) //si esta obert
	{
		fitxer2.read((char *)&p1,sizeof(p1)); //llegim primer registre
		while(!fitxer2.eof()) //mentre no final fitxer
		{
		mostrar_dades(p1);
		fitxer2.read((char *)&p1,sizeof(p1)); //llegim registre
		}
		fitxer2.close();
	}
}
