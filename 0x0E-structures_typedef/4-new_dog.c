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

	if (name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	len1 = _strlen(name);
	len2 = _strlen(owner);

	new_dog->name = malloc(len1);
	if (new_dog->name == NULL)
		return (NULL);
	new_dog->owner = malloc(len2);
	if (new_dog->owner == NULL)
		return (NULL);

	_strncpy(new_dog->name, name, len1);
	_strncpy(new_dog->owner, owner, len2);

	return (new_dog);
}
