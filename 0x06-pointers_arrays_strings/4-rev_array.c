/**
 * reverse_array - function that reverses the content of an
 * array of integers.
 * @a: pointer param 1.
 * @n: integer array size.
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n / 2; i++ && n--)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1] = j;
	}
}
