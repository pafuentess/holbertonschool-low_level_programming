#include "holberton.h"

/**
* _abs - computes the absolute value of an integer.
* @n: the value to evaluate
* Return: (a)
*/

int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = n * (-1);
	}

	else if (n > 0)
	{
		a = n * (1);
	}

	else if (n == 0)
	{
		a = 0;
	}
return (a);

}
