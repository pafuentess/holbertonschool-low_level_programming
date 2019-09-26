#include "holberton.h"

/**
* _isupper - check if the character is uppercase
* @c: character to evaluate
* Return: (b)
*/

int _isupper(int c)
{
	char b;

	if (c >= 'A' && c <= 'Z')
	{
		b = 1;
	}

	else
	{
		b = 0;
	}

	return (b);

}
