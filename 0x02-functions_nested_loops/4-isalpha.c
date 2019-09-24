#include "holberton.h"

/**
* _isalpha - checks for alphabetic character.
* @c: character to evaluate
* Return: (a)
*/

int _isalpha(int c)
{
	int a;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		a = 1;

	}

	else
	{
		a = 0;
	}

return (a);

}
