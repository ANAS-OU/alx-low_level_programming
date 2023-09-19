#include <stdio.h>

/**
 * print_array - function that prints n elements of
 * an array of integers, followed by a new line.
 * @a: pointer param 1.
 * @n: param 2.
 */

void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);
	for (i = 1; i < 5; i++)
		printf(", %d", a[i]);
	
	printf("\n");
}
