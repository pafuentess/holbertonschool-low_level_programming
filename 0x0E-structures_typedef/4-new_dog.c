#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
* _strncpy - write a string in other
* @dest: string into copy
* @src: string to copy
* @n: number of charts to copy
* Return: (dest): string modifie
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n ; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

/**
* new_dog - Write a function that creates a new dog.
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *new_dog;
	char *copyname, *copyowner;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	if (name == NULL)
		name = "";
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	len1 = _strlen(name);
	len2 = _strlen(owner);

	copyname = malloc(len1 + 1);
	copyowner = malloc(len2 + 1);

	_strncpy(copyname, name, len1);
	_strncpy(copyowner, owner, len2);

	return (new_dog);
}
