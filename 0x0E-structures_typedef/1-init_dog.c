#include <stddef.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type <dog>.
 * @d: the object dog.
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
