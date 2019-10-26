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

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", va_arg(numeros, unsigned int));
		if (separator != NULL && (i + 1 != n))
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
