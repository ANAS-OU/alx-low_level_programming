/**
 * _strlen - function that returns the length of
 * a given string.
 * @s: pointer to the given string.
 *
 * Return: the string length.
 */

size_t _strlen(char *s)
{
	size_t len;

	len = 0;
	while (*s++)
		len++;

	return (len);
}
