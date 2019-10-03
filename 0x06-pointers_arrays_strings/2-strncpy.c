#include "holberton.h"

/**
* _strncpy - write a string in other
* @dest: string into copy
* @src: string to copy
* @n: number of charts to copy
* Return: (dest): string modifie
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n ; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

