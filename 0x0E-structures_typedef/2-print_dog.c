#include "dog.h"
#include <stdio.h>

/**
* print_dog - function that prints a struct dog
* @d: information of new dog
*/

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
