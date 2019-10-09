#include "holberton.h"

/**
* _pow_recursion - exponential function
* @x: base factor
* @y: exponent
* Return: int the exponential number
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * (_pow_recursion(x, (y - 1))));
}
