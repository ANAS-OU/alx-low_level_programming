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
	char *p;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		p[i] = '0';
	return ((void *)p);
}
