#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - add positive int
* @argc: int to add
* @argv: array of args
* Return: (0);
*/

int main(int argc, char *argv[])
{
	int i, j, suma;
	char *digito;

	suma = 0;

	for (i = 1; i < argc; i++)
	{
		digito = argv[i];

		j = 0;

		while (digito[j] != '\0')
		{
			if (isdigit(digito[j]) == 0)
			{
				printf("Error\n");
				return (1);
			}

			j++;
		}

		if (atoi(argv[i]) >= 0)
		{
			suma = suma + atoi(argv[i]);
		}
	}
		printf("%d\n", suma);

	return (0);
}
