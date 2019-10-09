#include "holberton.h"

/**
* _sqrt_pauli - complement the sqrt function
* @n: number to find the sqrt
* @i: index to finde the sqrt
* Return: The sqrt of number
*/

int _sqrt_pauli(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}

	if (i * i == n)
	{
		return (i);
	}

	else if (i * i > n)
	{
		return (-1);
	}

	return (_sqrt_pauli(n, (i + 1)));
}

/**
* _sqrt_recursion - find the sqrt of an int
* @n: number to evaluate
* Return: result
*/

int _sqrt_recursion(int n)
{
	return (_sqrt_pauli(n, 1));
}
