/**
 * reverse_array - function that reverses the content of an
 * array of integers.
 * @a: pointer param 1.
 * @n: integer array size.
 */

void reverse_array(int *a, int n)
{
	int i, j;

	n--;
	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		n--;
	}
}
