#include <stdio.h>
#include <stdlib.h>

/**
* main - multiply two numbers
* @argc: arguments to multiply
* @argv: array of argc
* Return: (0)
*/

int main(int argc, char *argv[])
{
	int multi;

	if (argc < 3)
	{
		printf("Error\n");
	}

	else
	{
		multi =  atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", multi);
	}

	return (0);

}
