#include "holberton.h"
#include <stdlib.h>

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
* _strdup - copy of the string given as a parameter.
* @str: string to copy
* Return: the copy of str
*/

char *_strdup(char *str)
{
	int len, i;
	char *ar;

	if (str == NULL)
	{
		return (NULL);
	}

	len = (_strlen(str) + 1);
	ar = malloc(len);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < len ; i++)
	{
		ar[i] = str[i];
	}

	return (ar);
}
