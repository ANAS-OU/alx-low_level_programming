#include <stddef.h>

/**
 * int_index - function that searches for an integer.
 * @array: array of elements.
 * @size: size of the array.
 * @cmp: the comparetion method.
 * Return: index of the first element that the comparetion
 * method returns for it 1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
