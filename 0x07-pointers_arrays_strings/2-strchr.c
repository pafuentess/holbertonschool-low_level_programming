#include "holberton.h"

/**
* _strchr - locates a character in a string.
* @s: where to find
* @c: character to find
* Return: s, when find the character
*/


char *_strchr(char *s, char c)
{
	int a = 0;
	int b;

	while (s[a] != '\0')
	{
		++a;
	}

	for (b = 0 ; b <= a ; b++)
	{
		if (s[b] == c)
		{
			s = s + b;
			break;
		}
		else if (b == a)
		{
			s = 0;
		}
	}
	return (s);
}
