#include "Operaciones_preprocesador.h"
#include "stdafx.h"
#include <iostream>

#define str2(s) str(s)
#define str(s) #s
#define CONC(A, B) A##B

using namespace std;

void operaciones_preprocesador(int option1, int option2)
{
	int variable1 = 0;
	double double1 = 0;
	char character1 = 'a';

	cout << "\n\n\nLa concatenacion de las variables elegidas es:\n";

	if (option1 == 1)
	{
		if (option2 == 1) cout << str2(CONC(variable1, variable1)) << "\n\n\n";
		if (option2 == 2) cout << str2(CONC(variable1, double1)) << "\n\n\n";
		if (option2 == 3) cout << str2(CONC(variable1, character1)) << "\n\n\n";
	}
	if (option1 == 2)
	{
		if (option2 == 1) cout << str2(CONC(double1, variable1)) << "\n\n\n";
		if (option2 == 2) cout << str2(CONC(double1, double1)) << "\n\n\n";
		if (option2 == 3) cout << str2(CONC(double1, character1)) << "\n\n\n";
	}
	if(option1 == 3)
	{
		if (option2 == 1) cout << str2(CONC(character1, variable1)) << "\n\n\n";
		if (option2 == 2) cout << str2(CONC(character1, double1)) << "\n\n\n";
		if (option2 == 3) cout << str2(CONC(character1, character1)) << "\n\n\n";
	}
}