#include "holberton.h"

/**
* _isdigit - verify is is c is a number
* @c: character to evaluate
* Return: b can be 0 or 1
*/


int _isdigit(int c)
{
	char b;

	if (c >= '0' && c <= '9')
	{
		b = 1;
	}

	else
	{
		b = 0;
	}

	return (b);

}
