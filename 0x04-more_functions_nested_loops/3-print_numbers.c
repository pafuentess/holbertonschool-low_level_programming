#include "holberton.h"

/**
* print_numbers - print number from 0 to 9
*/

void print_numbers(void)
{
	char a;

	for (a = '0' ; a <= '9' ; ++a)
	{
		_putchar(a);
	}
	_putchar('\n');
}
