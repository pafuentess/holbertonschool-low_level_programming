#include <stdio.h>

/**
* main - prints all possible combinations of
* two two-digit numbers.
* Return: 0
*/

int main(void)
{
	int i, j, a, b, c, d;

	i = 0;

	while (i < 100)
	{
		j = i + 1;

		while (j < 100)
		{
			a = i / 10;
			b = i % 10;
			c = j / 10 % 10;
			d = j % 10;
			putchar(a + '0');
			putchar(b + '0');
			putchar(' ');
			putchar(c + '0');
			putchar(d + '0');

			if (i == 98)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
