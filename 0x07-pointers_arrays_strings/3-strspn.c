#include "holberton.h"

/**
* _strspn - count in bytes the prefix
* @s: string to evaluate
* @accept: string to compare
* Return: contador number of bytes of sufix
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int contador;
	int a, b;

	contador = 0;

	a = 0;
	while (s[a] > 32)
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				contador = contador + 1;
			}
			++b;
		}
		++a;
	}
	return (contador);
}
