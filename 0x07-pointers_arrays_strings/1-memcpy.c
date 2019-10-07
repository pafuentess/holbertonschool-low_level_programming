#include "holberton.h"

/**
* _memcpy - function copies n bytes from memory area src to memory area des
* @dest: to copy bytes from src
* @src: from copy
* @n: number of bytes
* Return: dest the memory modifie
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		++a;
	}

	return (dest);
}
