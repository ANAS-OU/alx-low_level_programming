/**
 * _strlen - function that returns the length of
 * a given string.
 * @s: pointer to the given string.
 *
 * Return: the string length.
 */

unsigned int _strlen(char *s)
{
	unsigned int len;

	len = 0;
	while (*s++)
		len++;

	return (len);
}
