#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints the dog struct.
 * @d: pointer to the struct dog (type: dog).
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", "(nil)");
		if (d->age != NULL)
			printf("Age: %ul\n", d->age);
		else
			printf("Age: %s\n", "(nil)");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %s\n", "(nil)");
	}
}
