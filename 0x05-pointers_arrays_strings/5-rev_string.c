/**
 * rev_string - function that reverses a string in memory.
 * @s: pointer param.
 */

void rev_string(char *s)
{
	char *p = s;
	char c;

	while (*s)
		s++;

	s--;
	while (p != s)
	{
		c = *s;
		*s = *p;
		*p = c;
		s--;
		p++;
	}
}
