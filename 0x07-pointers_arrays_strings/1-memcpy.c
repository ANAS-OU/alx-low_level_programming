/**
 * _memcpy - function that copies memory area.
 * @dest: pointer param 1.
 * @src: pointer param 2.
 * @n: integer param 3.
 * Return: pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
