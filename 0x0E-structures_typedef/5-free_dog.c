#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees dogs
 * that were created by malloc func.
 * @d: The dog wanna free.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
