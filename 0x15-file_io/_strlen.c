/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to a given string.
 *
 * Return: the given string length.
 */

unsigned int _strlen(char *s)
{
	unsigned int len;

	len = 0;
	while (*s++)
		len++;
	return (len);
}
