#include <stddef.h>
#include "dog.h"

/**
 * new_dog - Function that create a new dog.
 * @name: The name of a dog.
 * @age: The age of a dog.
 * @owner: The owner of a dog.
 * Return: Pointer of type dog_t to the created dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	char dogs_name[] = name;
	char dogs_owner[] = owner;

	new_dog.name = name;
	new_dog.age = age;
	new_dog.owner = owner;
	return (&new_dog || NULL);
}
