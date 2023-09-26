/**
 * _strpbrk - funciton that searches a string for
 * any of a set of bytes.
 * @s: pointer param 1.
 * @accept: pointer param 2.
 * Return: string of search result.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return (s);
}
