#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: param 1.
 * @height: param 2.
 * Return: pointer to a 2 dimensional
 * array.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i;

	arr = malloc(height * sizeof(int*));
	for (i = 0; i < height; i++)
		arr[i] = malloc(width * sizeof(int));

	return (arr);
}
