#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Function for print the struct dog
 * @d: Pointer for give a new variable of the different information
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(" ");
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	if (!d->age)
	{
		printf("Age: (nil)");
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)");
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
