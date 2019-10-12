#include <stdio.h>

/**
* main - program that prints the number of
* arguments passed into it.
* @argc: arguments passed
* @argv: array of argc
* Return: (0)
*/


int main(int argc, char *argv[])
{
	argv[0] = argv[0];

	printf("%d\n", (argc - 1));

	return (0);
}
