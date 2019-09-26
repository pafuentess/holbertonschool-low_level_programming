#include <stdio.h>

/**
* main - change number
* Return: (0)
*/

int main(void)
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

		else if (c == 0)
		{
			if (a == 100)
			{
				printf("Buzz");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
	return (0);

}


