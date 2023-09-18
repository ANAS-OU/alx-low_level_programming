/**
 * swap_int - function that swaps
 * the values of two integers.
 * @a: Pointer param 1
 * @b: Pointer param 2
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
