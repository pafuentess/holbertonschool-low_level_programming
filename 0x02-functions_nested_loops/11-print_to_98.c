#include "holberton.h"
#include <stdio.h>

/**
* print_to_98 - computes the number until n.
* @n: the value to start
*/

void print_to_98(int n)
{
	int a;

	if (n <= 98)
	{
		for (a = n ; a <= 98 ; ++a)
		{
			if (a == 98)
			{
				printf("%i", a);
			}
			else
			{
				printf("%i, ", a);
			}
		}
	}
	else
	{
		for (a = n ; a >= 98 ; --a)
		{
			if (a == 98)
			{
				printf("%i", a);
			}
			else
			{
				printf("%i, ", a);
			}
		}
	}
	printf("\n");
}
