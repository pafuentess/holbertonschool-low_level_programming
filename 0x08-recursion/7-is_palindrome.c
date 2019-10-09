#include "holberton.h"

/**
* _strlen_recursion - returns the length of a string.
* @s: string to count;
* Return: lenght of string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
* mov_point - move the pointer and compare
* @s: string to read
* @len: Length of string
* Return: 1 if s is a palindrome
*/

int mov_point(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}

	if (*s != s[len - 1])
	{
		return (0);
	}
	else
	{
		return (mov_point((s + 1), (len - 2)));
	}
}

/**
* is_palindrome - verify a string is a palindrome
* @s: String to check
* Return: 1 if palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}

	return (mov_point(s, len));
}
