#include <stdlib.h>
#include "holberton.h"

/**
* _strlen - define the leng of a array
* @s: array to evaluate
* Return: (a): the lenght of array
*/

int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
	++a;
	}
	return (a);
}

/**
* argstostr - concatenates all the arguments of your program.
* @ac: counts of arguments
* @av: pointer to store ac
* Return: return the pointer with the arguments
* concatenados
*/

char *argstostr(int ac, char **av)
{
	char *ar;
	int len, i, j, d, leng;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = i = 0;
	while (i < ac)
	{
		len = len + _strlen(av[i]);
		i++;
	}
	len = len + ac + 1;
	ar = malloc(len * sizeof(char));
	if (ar == NULL)
		return (NULL);
	i = 0;
	d = 0;
	while (i < ac)
	{
		leng = _strlen(av[i]);
		j = 0;
		while (j < leng)
		{
			ar[d] = av[i][j];
			d++;
			j++;
		}
		ar[d] = '\n';
		d++;
		i++;
	}
	ar[d] = '\0';

	return (ar);
}
