#include "holberton.h"

/**
* _strcmp - compares to strings
* @s1: string to compare
* @s2: string to compare
* Return: (c), an int
*/

int _strcmp(char *s1, char *s2)
{
	int a, c;

	c = 0;
	a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] == s2[a])
		{
			c = c + 0;
		}

		else if (s1[a] > s2[a])
		{
			c = c + 1;
		}

		else if (s1[a] < s2[a])
		{
			c = c - 1;
		}
		++a;

	}
	return (c);
}
