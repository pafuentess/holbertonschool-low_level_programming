#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - function that prints numbers
* @separator: character that separates numbers
* @n: numbers of parameter that function recieves
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numeros;
	unsigned int i;

	va_start(numeros, n);

	if (separator == NULL)
		separator = "";
	for (i = 0 ; i < n ; i++)
	{
		if (i == (n - 1))
			printf("%d", va_arg(numeros, unsigned int));
		else
			printf("%d%c ", va_arg(numeros, unsigned int), *separator);
	}

	printf("\n");
}

