/**
 * infinite_add - function that adds two numbers.
 * @n1: pointer param 1.
 * @n2: pointer param 2.
 * @r: pointer param 3.
 * @size_r: integer param 4.
 * Return: pointer adds result.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/*
	int n, m;

	m = 0;
	while (*n1)
		n1++;
	*/
	r = r + 98;

	while (*n2)
		n2++;

	n2--;
	while (*n2 != '\0')
	{
		/*
		n = m + (*n1 - '0') + (*n2 - '0');
		if (n >= 10)
		{
			r[size_r - 1] = (n % 10) + '0';
			m++;
		}
		else
		{
			r[size_r - 1] = n + '0';
			m--;
		}
		*/
		*r = *n2;
		n2--;
		r--;
	}
	return (r);
}
