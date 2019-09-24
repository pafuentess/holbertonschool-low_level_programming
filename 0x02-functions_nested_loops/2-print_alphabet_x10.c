#include "holberton.h"

/**
* print_alphabet_x10 - writes the alphabet in lowercase ten times.
* Return: (void)
*/

void print_alphabet_x10(void)
{
	char a;
	int b;

	b = 1;

	while (b <= 10)
	{
		for (a = 'a' ; a <= 'z' ; ++a)
		{
			_putchar(a);
		}

		++b;
		_putchar('\n');

	}
}
