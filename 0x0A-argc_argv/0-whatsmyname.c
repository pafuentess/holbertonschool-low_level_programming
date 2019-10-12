#include <stdio.h>

/**
* main -  program that prints its name
* @argc: arguments supplied to program
* @argv: array of argc
* Return: int (0)
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);

	return (0);
}
