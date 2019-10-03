#include "holberton.h"

/**
* _strlen - define the leng of a array
* @s: array to evaluate
* Return: (a): the lenght of array
*/

int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		++a;
	}

	return (a);
}

/**
* _strncat - cocatenate n strings
* @dest: string who receives
* @src: string to add
* @n: numbers to concatenated
* Return: (dest) the strings concatenated
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b, d;

	a = _strlen(dest);
	b = _strlen(src);
	d = 0;

	while (d < n && d < b)
	{
		dest[a] = src[d];

		++a;
		++d;
	}

	return (dest);
}
