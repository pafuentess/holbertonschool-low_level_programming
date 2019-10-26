#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - function that prints anything.
* @format: list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	va_list lista;
	int i;
	char *st;

	va_start(lista, format);

	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(lista, int));
				break;
			case 'i':
				printf("%d", va_arg(lista, int));
				break;
			case 'f':
				printf("%f", va_arg(lista, double));
				break;
			case 's':
				st = va_arg(lista, char *);
				if (st == NULL)
					st = "(nil)";
				printf("%s", st);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
}
