#include "holberton.h"

/**
* _strpbrk - move the pointer
* @s: string to compare
* @accept: string to compare
* Return: s, the pointer in a new address
*/

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				s = s + a;
				return (s);
			}
			++b;
		}
		++a;
	}
	s = 0;

	return (s);
}
