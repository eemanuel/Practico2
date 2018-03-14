#include "stdafx.h"
#include <iostream>
#include "Operaciones_logicas.h"
#include "utils.h"

using namespace std;

void operaciones_logicas(void)
{
	char var1 = 'a', var2 = 'a', aux_var = 'a', option = 'a';
	int int1 = 0, int2 = 0, aux_int = 0;

	cout << "\nIntercambiara 2 caracteres o 2 numeros?\n";
	cout << "\n'c' (caraceteres), 'n' (numeros)\n";
	cin >> option;

	option = operaciones_logicas_error(option);

	if (option == 'c')
	{
		cout << "\n\n\nIngrese la Primer variable\n";
		cin >> var1;
		cout << "\nIngrese la Segunda variable\n";
		cin >> var2;
		aux_var = var1;
		var1 = var2;
		var2 = aux_var;

		cout << "\n\n\nAhora la Primer Variable de Caracter vale: " << var1 << "\n";
		cout << "\ny la Segunda Variable de Caracter vale: " << var2 << "\n";
	}
	else
	{
		cout << "\n\n\nIngrese la Primer variable\n";
		cin >> int1;
		cout << "\nIngrese la Segunda variable\n";
		cin >> int2;
		aux_int = int1;
		int1 = int2;
		int2 = aux_int;

		cout << "\n\n\nAhora la Primer Variable Numerica vale: " << int1 << "\n";
		cout << "\ny la Segunda Variable Numerica vale: " << int2 << "\n";
	}
}