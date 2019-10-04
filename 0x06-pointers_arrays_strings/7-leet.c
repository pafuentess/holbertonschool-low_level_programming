#include "holberton.h"

/**
* leet - codes a string in 1337
* @p: function parameter
* Return: p
*/

char *leet(char *p)
{
	int a, b;
	char ini[] = "AaEeTtLlOo";
	char fin[] = "4433771100";

	for (a = 0; p[a] != '\0'; a++)
	{
		for (b = 0; ini[b] != '\0'; b++)
		{
			if (p[a] == ini[b])
			{
				p[a] = fin[b];
			}
		}
	}
	return (p);
}
