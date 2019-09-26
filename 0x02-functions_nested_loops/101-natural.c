#include "stdio.h"

/**
* main - prints the add of multiples of
* 5 and 3.
* Return (0)
*/

int main(void)
{
	int a, b, c, suma;

	for (a = 1 ; a < 1024 ; ++a)
	{
		b = a % 3;
		c = a % 5;

		if (b == 0)
		{
			suma = suma + a;
		}

		else if (c == 0)
		{
			suma = suma + a;
		}
	}
	printf("%i\n", suma);
}
