#include "holberton.h"

/**
* _strstr - unction finds the first occurrence of the substring
* @haystack: string to read
* @needle: string to compare
* Return: return the match after the match
*/

char *_strstr(char *haystack, char *needle)
{
	int cont;

	while (*haystack != '\0')
	{
		cont = 0;
		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			haystack++;
			needle++;
			cont++;
		}

		if (*needle == '\0')
		{
			return (haystack - cont);
		}

		haystack = haystack - cont + 1;
		needle = needle - cont;
	}

	haystack = 0;

	return (haystack);
}
