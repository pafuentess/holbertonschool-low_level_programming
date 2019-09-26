#include <stdio.h>

/**
* main- prints the add of multiples of
* 5 and 3.
* Return: (0)
*/

int main(void)
{
	int a, suma;

	for (a = 1 ; a < 1024 ; ++a)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		{
			suma = suma + a;
		}

	}
	printf("%i\n", suma);

	return (0);
}
