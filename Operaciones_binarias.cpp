#include "stdafx.h"
#include <iostream>
#include "Operaciones_binarias.h"
#include "utils.h"

using namespace std;

void operaciones_bin(void)
{
	int option_func = 1, var_desp = 0;
	bool bool1 = true, bool2 = true, bool_result = true;

	while (0 < option_func && option_func < 5)
	{
		cout << "\nSe puede calcular:";
		cout << "\n1 - AND\n";
		cout << "\n2 - OR\n";
		cout << "\n3 - Desplazar 2 bits a la derecha\n";
		cout << "\n4 - Desplazar 2 bits a la izquierda\n";
		cout << "\n0 - Volver al Menu anterior\n\n\n";
		cout << "Ingrese la opcion deseada\n";
		cin >> option_func;

		switch (option_func)
		{
		case 1:
			cout << "\n\n\nIngrese el valor de verdad para la Primer variable\n";
			bool1 = input_bool_t_o_f();
			cout << "\n\n\nIngrese el valor de verdad para la Segunda variable\n";
			bool2 = input_bool_t_o_f();
			bool_result = operaciones_bin_AND(bool1, bool2);
			cout << "\n" << bool_to_string(bool1);
			cout << " AND " << bool_to_string(bool2);
			cout << "     Equivale a     " << bool_to_string(bool_result);
			cout << "\n\n\n";
			break;
		case 2:
			cout << "\n\n\nIngrese el valor de verdad para la Primer variable\n";
			bool1 = input_bool_t_o_f();
			cout << "\n\n\nIngrese el valor de verdad para la Segunda variable\n";
			bool2 = input_bool_t_o_f();
			bool_result = operaciones_bin_OR(bool1, bool2);
			cout << "\n" << bool_to_string(bool1);
			cout << " OR " << bool_to_string(bool2);
			cout << "     Equivale a     " << bool_to_string(bool_result);
			cout << "\n\n\n";
			break;
		case 3:
			cout << "\nIngrese el numero a Desplazar 2 bits a la Derecha\n";
			cin >> var_desp;
			cout << "\n el numero resultante es: " << operaciones_bin_desp_DER(var_desp) << "\n";
			break;
		case 4:
			cout << "\nIngrese el numero a Desplazar 2 bits a la Izquierda\n";
			cin >> var_desp;
			cout << "\n el numero resultante es: " << operaciones_bin_desp_IZQ(var_desp) << "\n";
			break;
		case 0:
			break;
		default:
			cout << "\n\n\nLa opcion que ingreso no existe en el menu\n";
			break;
		}
	}
}

bool operaciones_bin_AND(bool bool1_func, bool bool2_func)
{
		return (bool1_func && bool2_func);
}

bool operaciones_bin_OR(bool bool1_func, bool bool2_func)
{
		return (bool1_func || bool2_func);
}


int operaciones_bin_desp_DER(int a_desp)
{
		return (a_desp >> 2);
}

int operaciones_bin_desp_IZQ(int a_desp)
{
		return (a_desp << 2);
}