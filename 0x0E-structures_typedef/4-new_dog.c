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
* _strcpy - copies the string
* @dest: to copy
* @src: from copy
* Return: dest. value to return
*/

char *_strcpy(char *dest, char *src)
{

	int a, b;

	a = 0;
	while (src[a] != '\0')
	{
		++a;
	}

	for (b = 0 ; b <= a ; b++)
	{
		dest[b] = src[b];
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

	new_dog->name = malloc(len1 + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(len2 + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	new_dog->owner = _strcpy(new_dog->owner, owner);

	return (new_dog);
}
