#include "stdafx.h"
#include <iostream>
#include "utils.h"

using namespace std;

float circle_area_error(float number)
{
	while (number < 0)
	{
		cerr << "\n\n\nNo existe un circulo con radio negativo,\n";
		cerr << "\nIngrese un numero mayor o igual que cero\n";
		cin >> number;
	}
	return number;
}

char operaciones_logicas_error(char character)
{
	while (character != 'c' && character != 'n')
	{
		cerr << "\n\n\Ingreso una Opcion Incorrecta\n";
		cerr << "\n'c' (caraceteres), 'n' (numeros)\n";
		cin >> character;
	}
	return character;
}

char input_bool_t_o_f_error(char input_bool)
{
	while (input_bool != 'v' && input_bool != 'f')
	{
		cerr << "\n\n\Ingreso un caracter Invalido\n";
		cerr << "Ingrese 'v' (verdadero) o ingrese 'f' (falso)\n";
		cin >> input_bool;
	}
	return input_bool;
}

int option_concatenation_error(int option)
{
	while (0 > option || option > 3)
	{
		cerr << "\nIngrese una opcion valida\n";
		cerr << "\nIngrese el numero de la Primer Variable\n";
		cin >> option;
	}
	return option;
}


bool input_bool_t_o_f()
{
	char input_bool = 'a';

	cout << "\nIngrese 'v' (verdadero) o ingrese 'f' (falso)\n";
	cin >> input_bool;

	input_bool = input_bool_t_o_f_error(input_bool);

	if (input_bool == 'v') return true;
	else return false;
}

const char* bool_to_string(bool bool_func)
{
	if (bool_func == true) return ("verdadero");
	else return ("falso");
}