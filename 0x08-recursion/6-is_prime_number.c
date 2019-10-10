#include "holberton.h"

/**
* paulis_prime - auxiliar function to get a prime number
* @n: number to evaluate
* @i: index to divide n
* Return: if is prime or not
*/

int paulis_prime(int n, int i)
{
	if (n == i)
	{
		return (1);
	}

	else if (n % i == 0)
	{
		return (0);
	}

	else
	{
		return (paulis_prime(n, (i + 1)));
	}
}

/**
* is_prime_number - define if a number is prime
* @n: number to evaluate
* Return: define is a number is prime
*/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (paulis_prime(n, 2));
}
