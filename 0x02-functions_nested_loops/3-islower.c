#include "holberton.h"

/**
* _islower -  identify is c is lowercase or uppercase
* @c: the value to evaluate
* Return: (a)
*/

int _islower(int c)
{
	int a;

	if (c >= 'a' && c <= 'z')
	{
		a = 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		a = 0;
	}
return (a);
}

