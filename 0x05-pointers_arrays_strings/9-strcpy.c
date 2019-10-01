#include "holberton.h"

/**
* _strcpy - copies the string
* @dest: to copy
* @src: from copy
* Return: dest. value to return
*/

char *_strcpy(char *dest, char *src)
{

	int a, b;

	a = 0;
	while (src[a] != '\0')
	{
		++a;
	}

	for (b = 0 ; b <= a ; b++)
	{
		dest[b] = src[b];
	}

	return (dest);
}
