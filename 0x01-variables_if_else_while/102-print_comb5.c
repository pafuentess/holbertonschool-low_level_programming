#include <stdio.h>

/**
* main - prints all possible combinations of
* two two-digit numbers.
* Return: 0
*/

int main(void)
{
	int i, j, k, z;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			for (k = 0 ; k <= 9 ; k++)
			{
				if (k != i)
					z = '0';
				else
					z = j + 1;
				for (z = z ; z <= 9 ; z++)
				{
					if (i > j && k < z)
					{
					}
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(z + '0');
					if (i == 9 && j == 8 && k == 9 && z == 9)
					{
					}
					else
						putchar(',');
						putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
