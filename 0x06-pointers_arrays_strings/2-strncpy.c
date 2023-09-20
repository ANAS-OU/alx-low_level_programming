/**
 * _strncpy - function that copies a string.
 * @dest: pointer param 1.
 * @src: pointer param 2.
 * @n: integer param 3.
 * Return: pointer string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int i;

	i = 0;
	while (*src && i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (p);
}
