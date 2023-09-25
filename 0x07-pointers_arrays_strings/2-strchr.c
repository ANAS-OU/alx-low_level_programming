/**
 * _strchr - function that locates a character
 * in a string.
 * @s: pointer param 1.
 * @c: byte to search.
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	*s = NULL
	return (s);
}
