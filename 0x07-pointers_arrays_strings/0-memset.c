#include "holberton.h"

/**
* _memset - fill memory with a constant
* @s: string to fill
* @b: value of constan
* @n: number of space to fill
* Return: (s) the string modified.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		++a;
	}
	return (s);
}
