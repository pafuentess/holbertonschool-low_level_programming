#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*printchar - print a character
*@lista: parameters to print
*/

void printchar(va_list lista)
{
	printf("%c", va_arg(lista, int));
}

/**
*printint - print an integer
*@lista: parameters to print
*/

void printint(va_list lista)
{
	printf("%d", va_arg(lista, int));
}

/**
*printfloat - print a float
*@lista: parameter to print
*/
void printfloat(va_list lista)
{
	printf("%f", va_arg(lista, double));
}

/**
*printstring - print a string
*@lista: parameter to print
*/

void printstring(va_list lista)
{
	char *st;

	st = va_arg(lista, char *);
	if (st == NULL)
		st = "(nil)";
	printf("%s", st);
}

/**
*print_all - function that prints anything.
*@format: parameters to print
*/

void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{"c", printchar},
		{"i", printint},
		{"f", printfloat},
		{"s", printstring},
		{NULL, NULL}
	};

	va_list lista;
	int i, j = 0;

	va_start(lista, format);

	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (ops[i].op != NULL)
		{
			if (format[j] == *(ops[i].op))
			{
				(ops[i].f)(lista);
			}
			i++;
		}
		if ((format[j] == 'c' || format[j] == 'i' || format[j] == 'f' ||
			format[j] == 's') && format[j + 1] != '\0')
		{
			printf(", ");
		}
		j++;
	}
	printf("\n");
	va_end(lista);
}
