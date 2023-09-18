/**
 * rev_string - function that reverses a string in memory.
 * @s: pointer param.
 */

void rev_string(char *s)
{
	int i, j;
	char c;

	i = 0;
	while (s[i])
		i++;

	i--;
	for (j = 0; j < i; j++)
	{
		c = s[j];
		s[j] = s[i];
		s[i--] = c;
	}
}
