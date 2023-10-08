#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using
 * <malloc> and <free>.
 * @ptr: pointer to the block wanna reallocate it.
 * @old_size: size of the old block.
 * @new_size: size of the new block.
 * Return: pointer to the reallocated block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i, min_size;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	min_size = old_size;
	if (old_size > new_size)
		min_size = new_size;
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (ptr == NULL)
		for (i = 0; i < min_size; i++)
			((char *)p)[i] = new_size;
	else
		for (i = 0; i < min_size; i++)
			((char *)p)[i] = ((char *)ptr)[i];

	free(ptr);
	return (p);
}
