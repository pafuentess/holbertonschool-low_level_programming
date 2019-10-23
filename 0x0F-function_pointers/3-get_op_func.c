#include "3-calc.h"
#include <stdio.h>

/**
* get_op_func - unction that selects the correct
* function to perform the operation asked by the user.
* @s: operations to make
* Return: result of operation
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};

	int i = 0;

	while (ops[i].f != NULL)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
