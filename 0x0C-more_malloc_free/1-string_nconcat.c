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
* string_nconcat - concatenates two strings.
* @s1: string to cancatenate
* @s2: string from concatenate n numbers
* @n: number of char to concatenate
* Return: string concatenate
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	unsigned int len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len = _strlen(s1);

	ar = malloc((len + n + 1) * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0 ; i < len ; i++)
	{
		ar[i] = s1[i];
	}

	for (j = 0 ; j <= n ; j++)
	{
		ar[i + j] = s2[j];
	}

	return (ar);

}
