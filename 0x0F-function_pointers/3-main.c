#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that performs simple operations.
* @argc: number of arguments that recieves
* @argv: store the arguments
* Return: the result of operations
*/

int main(int argc, char *argv[])
{
	char *oper;
	int num1, num2, resul;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oper = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (get_op_func(oper) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*oper == '/' && num2 == 0) || (*oper == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	resul = (get_op_func(argv[2])(num1, num2));

	printf("%d\n", resul);

	return (0);
}

