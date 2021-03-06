#include "stdafx.h"
#include <iostream>
#include "Operaciones_matematicas.h"
#include "Operaciones_String.h"
#include "Operaciones_binarias.h"
#include "Operaciones_logicas.h"
#include "Operaciones_preprocesador.h"
#include "utils.h"

using namespace std;

int main()
{
	int option = -1, option2 = 0;
	float number = 0, number2 = 0;
	char str1[100], str2[100];
	bool bool1 = true, bool2 = true;

	while(option != 0)
	{ //while1--------------------------
	cout << "\n----------------------------------\n";
	cout << "\nESTE PROGRAMA LE PERMITE CALCULAR:\n\n\n";
	cout << "\n1 - El cuadrado de un numero\n";
	cout << "\n2 - La suma de dos numeros\n";
	cout << "\n3 - El area de un circulo\n";
	cout << "\n4 - El maximo de dos numeros\n";
	cout << "\n5 - Concatenacion de nombres de variables\n";
	cout << "\n6 - Imprima por pantalla un texto (literal)\n";
	cout << "\n7 - Comparacion de cadena\n";
	cout << "\n8 - Operaciones binarias\n";
	cout << "\n9 - Operaciones logicas - intercambie dos variables (swap function)\n";
	cout << "\n0 - Salir\n\n\n";
	
	cout << "\nIngrese la Opcion deseada:\n";
	cin >> option;
	cout << "\n--------------------------\n";

	switch (option)
	{
		case 1: 
			cout << "\nIngrese el numero a elevar al cuadrado\n";
			cin >> number;
			cout << "\n\n\nSu numero al cuadrado es:   [ " << square(number) << " ]\n\n\n\n\n";
			break;
		case 2:
			cout << "\nIngrese el primer sumando\n";
			cin >> number;
			cout << "\nIngrese el otro sumando\n";
			cin >> number2;
			cout << "\n\n\nLa suma de ambos numeros es:   [ " << sum(number, number2) << " ]\n\n\n\n\n";
			break;
		case 3:
			cout << "\nIngrese el radio del circulo\n";
			cin >> number;
			number = circle_area_error(number);
			cout << "\n\n\nEl area del circulo es:   [ " << number << " ]\n\n\n\n\n";
			break;
		case 4:
			cout << "\nIngrese el primer numero\n";
			cin >> number;
			cout << "\nIngrese el otro numero\n";
			cin >> number2;
			cout << "\n\n\nEl maximo de ambos numeros es:   [ " << maximum(number, number2) << " ]\n\n\n\n\n";
			break;
		case 5:
			cout << "\nSeleccionara dos Variables para ser concatenadas\n";
			cout << "\n1 - variable1\n";
			cout << "\n2 - double1\n";
			cout << "\n3 - character1\n\n\n";

			cout << "\nIngrese el numero de la Primer Variable\n";
			cin >> option;
			option = option_concatenation_error(option);
			cout << "\nIngrese el numero de la Segunda Variable\n";
			cin >> option2;
			option = option_concatenation_error(option2);
			operaciones_preprocesador(option, option2);
			break;
		case 6:
			cin.ignore(100, '\n');
			cout << "\nIngrese el texto a mostrar\n";
			cin.getline(str1, 100);
			cout << "\nEl texto ingresado fue: \n\n\n" << str1 << "\n\n\n";
			break;
		case 7:
			cin.ignore(100, '\n');
			cout << "\nIngrese la primer cadena\n";
			cin.getline(str1, 100);
			cout << "\nIngrese la segunda cadena\n";
			cin.getline(str2, 100);
			if (true == strings_equals_or_not(str1, str2))
			{
				cout << "\n\n\nSI son iguales las dos cadenas\n";
			}
			else
			{
				cout << "\n\n\nNO son iguales las dos cadenas\n";
			}
			break;
		case 8:
			operaciones_bin();
		case 9:
			operaciones_logicas();
		case 0:
			break;
		default: 
			cout << "\nLa opcion que ingreso no existe en el menu\n";
			break;
	}

	if (option != 0)
	{
		cout << "\nPresione Enter para continuar\n\n\n";
		getchar();
		getchar();
	}

	} //while1--------------------------
	
	return 0;
}

