#include <stdlib.h>
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
* str_concat - concatenates two strings.
* @s1: string to concatenate
* @s2: string to concatenate
* Return: the concatenate string
*/

char *str_concat(char *s1, char *s2)
{
	int i, d, j, len1, len2;
	char *ar;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	ar = malloc(len1 + len2);
	if (ar == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0 ; i < len1 ; i++)
		{
			ar[i] = s1[i];
		}

		d = i;

		for (j = 0 ; j <= len2 ; j++)
		{
			ar[d + j] = s2[j];
		}
	}

	return (ar);
}
