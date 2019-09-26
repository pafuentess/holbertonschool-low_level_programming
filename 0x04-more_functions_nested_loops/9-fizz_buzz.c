#include <stdio.h>
#include "holberton.h"

/**
* main - print and changes numbers
*/

void main(void)
{
	int a, b, c;

	for (a = 1 ; a <= 100 ; a++)
	{
		b = a % 3;
		c = a % 5;

		if (b == 0 && c == 0)
		{
			printf("FizzBuzz ");
		}

		else if (b == 0)
		{
			printf("Fizz ");
		}

		else if (c == 0)
		{
			printf("Buzz ");
		}

		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
}
