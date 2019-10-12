#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins
* to make change for an amount of money.
* @argc: amount of money
* @argv: array of argc
* Return: (0)
*/

int main(int argc, char *argv[])
{
	int i = 0, moneda = 0;

	if (argc != 2)
	{	printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{	printf("0\n");
		return (0);
	}
	while (i > 0)
	{
		if (i >= 25)
		{	i = i - 25;
			moneda++;
		}
		else if (i >= 10)
		{	i = i - 10;
			moneda++;
		}
		else if (i >= 5)
		{	i = i - 5;
			moneda++;
		}
		else if (i >= 2)
		{	i = i - 2;
			moneda++;
		}
		else
		{	i = i - 1;
			moneda++;
		}
	}
	printf("%d\n", moneda);
	return (0);
}
