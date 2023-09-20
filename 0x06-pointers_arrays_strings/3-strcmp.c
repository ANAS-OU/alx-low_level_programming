/**
 * _strcmp - function that compares two strings.
 * @s1: pointer param 1.
 * @s2: pointer param 2.
 * Return: integer.
 */

int _strcmp(char *s1, char *s2)
{
	unsigned char c1, c2;

	do {
		c1 = (unsigned char) *s1++;
		c2 = (unsigned char) *s2++;
		if (c1 == '\0')
			return (c1 - c2);
	} while (c1 == c2);

	return (c1 - c2);
}
