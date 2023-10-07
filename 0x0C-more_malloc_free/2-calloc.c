#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * using <malloc>.
 * @nmemb: number of elements.
 * @size: size of each element.
 * Return: pointer to the reserved block.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; p[i] != '\0'; i++)
		p[i] = 0;
	return ((void *)p);
}
