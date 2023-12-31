/**
 * _memset - function that fills memory with constant byte.
 * @s: pointer param 1.
 * @b: constant byte.
 * @n: size of *s.
 * Return: pointer s;
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
