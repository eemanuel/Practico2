#include "stdafx.h"
#include "Operaciones_matematicas.h"
#include "utils.h"

#define PI 3.14159f

float square(float num)
{
	return (num * num);
}

float sum(float num1, float num2)
{
	return (num1 + num2);
}

float circle_area(float radio)
{
	radio = circle_area_error(radio);
	return (PI * square(radio));
}

float maximum(float num1, float num2)
{
	if (num1 >= num2) return num1;
	else return num2;
}
