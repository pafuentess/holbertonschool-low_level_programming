#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - function that returns the
* sum of all its parameters.
* @n: number of parameter to sum
* Return: add of all parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list numeros;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(numeros, n);

	for (i = 0 ; i < n ; i++)
	{
		sum = sum + va_arg(numeros, int);

	}
	va_end(numeros);
	return (sum);
}

