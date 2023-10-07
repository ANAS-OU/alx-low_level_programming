#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * using malloc.
 * @b: reseved block size.
 * Return: pointer to the block.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p != NULL)
		return (p);
	exit(98);
}
