#include <stdlib.h>
#include <string.h>
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
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	strcpy(new_dog->name, name);
	new_dog->age = age;
	strcpy(new_dog->owner, owner);
	return (new_dog);
}
