/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer param 1
 * @src: pointer param 2
 * Return: pointer contains two strings.
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (p);
}
