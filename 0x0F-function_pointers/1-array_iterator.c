#include <stddef.h>

/**
 * array_iterator - function that executes a function given as
 * a parameter on each element of an array.
 * @array: an array of elements.
 * @size: the array size.
 * @action: pointer the function that wanna execute.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
