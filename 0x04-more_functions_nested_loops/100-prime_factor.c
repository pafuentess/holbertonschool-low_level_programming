#include <stdio.h>

/**
 * main - print the bigger prime number of a number
 * Return: Always 0.
 */

int main(void)
{
	int a;
	long n;

	a = 2;
	n = 612852475143;

	while (n != 1)
	{
		if (n % a == 0)
		{
			n = (n / a);
		}
		else
		{
			a = a + 1;
		}
	}
	printf("%d", a);
	printf("\n");

	return (0);
}
