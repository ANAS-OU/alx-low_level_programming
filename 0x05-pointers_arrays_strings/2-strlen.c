/**
 * _strlen - function that returns the length of a string.
 * @s: pointer param.
 * Return: count value
 */

int _strlen(char *s)
{
	int count;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
