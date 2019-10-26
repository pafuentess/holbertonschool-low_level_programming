#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - function that prints strings, followed by a new line.
* @separator: character that separates the words
* @n: how many arguments recieves the functions
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *palabra;

	va_start(list, n);

	for (i = 0 ; i < n ; i++)
	{
		palabra = va_arg(list, char *);
		if (palabra == NULL)
			palabra = "(nil)";
		printf("%s", palabra);
		if (separator != NULL && (i + 1 != n))
			printf("%s", separator);
	}

	printf("\n");
}
