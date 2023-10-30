/**
 * _strlen - function that returns the length of
 * a given string.
 * @s: pointer to the given string.
 *
 * Return: the string length.
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s++)
		len++;

	return (len);
}
