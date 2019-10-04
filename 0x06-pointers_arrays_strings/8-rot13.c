#include "holberton.h"

/**
* rot13 - codes a string in rot13
*@p: function parameter
* Return: p
*/


char *rot13(char *p)
{
	int a, b;
	char inicio[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char fin[] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	a = 0;

	while (p[a])
	{
		for (j = 0; j < 52; j++)
		{
			if (p[a] == inicio[b])
			{
				s[a] = fin[b];
				break;
			}
		}
		a++;
	}
	return (s);
}
