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

	while (s[a] != '\0')
	{

		if (s[a] == c)
		{
			s = s + a;
			break;
		}
		else if (s[a] == '\0')
		{
			s = 0;
		}
		++a;
	}

	return (s);
}
