#include <stdlib.h>

/**
 * array_range - function that create an array
 * of integers.
 * @min: start value.
 * @max: end value.
 * Return: pointer to the array.
 */
int *array_range(int min, int max)
{
	int *p;
	unsigned int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = min++;
	return (p);
}
