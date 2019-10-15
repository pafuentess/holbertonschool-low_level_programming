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

	if ((len1 + len2) < 1)
	{
		return (0);
	}

	else
	{
		ar = malloc((len1 + len2) * sizeof(char));

		for (i = 0 ; i < len1 ; i++)
		{
			ar[i] = s1[i];
		}

		d = i;

		for (j = 0 ; j < len2 ; j++)
		{
			ar[d + j] = s2[j];
		}
	}
	free(ar);
	return (ar);
}
