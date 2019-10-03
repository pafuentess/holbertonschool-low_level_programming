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
* _strcat - cocatenate two strings
* @dest: string who receives
* @src: string to add
* Return: (dest) the strings concatenated
*/

char *_strcat(char *dest, char *src)
{
	int a, b, c, d;

	a = _strlen(dest);
	b = _strlen(src);

	for (c = a ; c <= (a + b) ; c++)
	{
		dest[c] = src[d];
		d++;
	}

	return (dest);
}


