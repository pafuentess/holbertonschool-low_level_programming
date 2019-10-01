#include "holberton.h"

/**
* swap_int - switch values between a pair
* @a: value to switch
* @b: value to switch
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
