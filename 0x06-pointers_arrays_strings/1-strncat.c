/**
 * _strncat - function that concatenates two strings.
 * @dest: pointer param 1.
 * @src: pointer param 2.
 * @n: integer param 3.
 * Return: pointer contains two strings.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *p = dest;

	while (*dest)
		dest++;

	i = 0;
	while (*src && i < n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return (p);
}
