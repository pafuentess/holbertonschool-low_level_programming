#include "holberton.h"
/**
* string_toupper - change from lowercase to uppercase
* @s: string to evaluate
* Return: (s) string actualizado
*/


char *string_toupper(char *s)
{
	int a;

	a = 0;
	while (s[a])
	{
		if (s[a] >= 97 && s[a] <= 122)
		{
			s[a] = s[a] - 32;
		}
		a++;
	}
	return (s);
}
