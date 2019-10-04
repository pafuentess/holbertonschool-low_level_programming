#include "holberton.h"

/**
* leet - code in 1337
* @s: string to code
* Return: (s) string codificado
*/

char *leet(char *s)
{
	int a, b;

	char maymin[] = "AaEeTtLlOo";
	char num[] = "4433771100";

	a = 0;

	while (s[a] != '\0')
	{
		for (b = 0 ; num[b] != '\0' ; a++)
		{
			if (s[a] == maymin[b])
			{
				s[a] = num[b];
			}
		}
		++a;
	}
	return (s);
}
