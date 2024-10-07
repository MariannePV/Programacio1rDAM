//============================================================================
// Name        : 01PR07.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char caracter;
	//string frase;

	cout << "Entra un caràcter" << endl;
	cin >> caracter;
	// caracter == 'a'
	if ((caracter == 65) or (caracter == 69) or (caracter == 73) or (caracter == 79) or (caracter == 85))
		cout << "És una vocal majúscula" << endl;
	else if ((caracter == 97) or (caracter == 101) or (caracter == 105) or (caracter == 111) or (caracter == 117))
		cout << "És una vocal minúscula" << endl;
	else
		cout << "El caràcter introduit no és una vocal" << endl;


	return 0;
}
