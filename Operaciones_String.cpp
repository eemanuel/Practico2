#include "stdafx.h"
#include "Operaciones_String.h"

bool strings_equals_or_not(char string1[], char string2[])
{
	int pivot = 0;
	while (string1[pivot] != '\0')
	{
		if (string1[pivot] == string2[pivot]) pivot++;
		else return false;
	}

	if (string2[pivot] == '\0') return true;
	else return false;
}