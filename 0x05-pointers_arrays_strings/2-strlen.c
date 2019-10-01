#include "holberton.h"

/**
* _strlen - define the leng of a array
* @s: array to evaluate
* Return: (a): the lenght of array
*/

int _strlen(char *s)
{
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		a = a + 1;
	}

	return (a);
}
