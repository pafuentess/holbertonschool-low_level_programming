#include "holberton.h"

/**
* rev_string - invert the order of character of a string
* @s: string to change
*/

void rev_string(char *s)
{
	int a, b;
	char inicio, fin;

	a = 0;
	b = 0;

	while (s[a] != '\0')
	{
		++a;
	}

	for (a = (a - 1) ; a >= b ; a--)
	{
		fin = s[a];
		inicio = s[b];
		s[b] = fin;
		s[a] = inicio;
		b++;
	}
}
