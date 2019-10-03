#include "holberton.h"

/**
* _strcmp - compares to strings
* @s1: string to compare
* @s2: string to compare
* Return: (c), an int
*/


int _strcmp(char *s1, char *s2)
{
	int a, d, b, c, resultado;


	a = 0;
	c = 0;

	while (s1[a] != '\0' && s2[a] != '\0' && c == 0)
	{
		if (s1[a] != s2[a])
		{
			b = s1[a];
			d = s2[a];
			c++;
		}

		else if (s1[a] == s2[a])
		{
			b = s1[a];
			d = s2[a];
		}
		++a;
	}
	resultado = b - d;
	return (resultado);
}
