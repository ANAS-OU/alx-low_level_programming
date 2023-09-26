/**
 * _strspn - function that gets the length of
 * a prefix substring.
 * @s: pointer param 1.
 * @accept: pointer param 2.
 * Return: integer substring size.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int n;

	n = 0;
	while (*accept)
	{
		for (i = 0; s[i] != ' '; i++)
		{
			if (*accept == s[i])
				n++;
		}
		accept++;
	}
	return (n);
}
