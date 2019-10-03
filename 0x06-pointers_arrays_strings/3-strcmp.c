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
* _strcmp - compares to strings
* @s1: string to compare
* @s2: string to compare
* Return: (c), an int
*/

int _strcmp(char *s1, char *s2)
{
	int a, b, c;

	a = _strlen(s1);
	b = _strlen(s2);

	if (a < b)
	{
		c = -15;
	}

	else if (a > b)
	{
		c = 15;
	}

	else if (a == b)
	{
		c = 0;
	}

	return (c);
}
