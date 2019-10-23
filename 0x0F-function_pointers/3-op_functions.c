#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add - sum two integer
* @a: number to add
* @b: number to add
* Return: (a + b)
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - substract a from b
* @a: number to substract
* @b: number to substract
* Return: (a - b)
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiply two numbers
* @a: number to multiply
* @b: number to multiply
* Return: the result of operation
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divide two numbers
* @a: number to divided
* @b: number who divided
* Return: (a / b)
*/


int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - returns the remainder of the division
* @a: number to divided
* @b: number who divides
* Return: (a % b)
*/

int op_mod(int a, int b)
{
	return (a % b);
}
