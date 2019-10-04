#include "holberton.h"

/**
* rot13 - codes a string in rot13
*@p: function parameter
* Return: p
*/


char *rot13(char *p)
{
	int a, b;

	char ini[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char fin[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	a = 0;
	while (p[a])
	{
		for (b = 0 ; ini[b] < 52 ; b++)
		{
			if (p[a] == ini[b])
			{
				p[a] = fin[b];
				break;
			}
		}
		a++;
	}

	return (p);
}
