#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - function that prints the dog struct.
 * @d: pointer to the struct dog (type: dog).
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf((d->age) ? "Age: %f", d->age : "Age: (nil)");
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
