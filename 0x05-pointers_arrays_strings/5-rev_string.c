/**
 * rev_string - function that reverses a string in memory.
 * @s: pointer param.
 */

void rev_string(char *s)
{
	char *p1 = s;
	char *p2 = s;
	char c;

	while (*p1)
		p1++;

	p1--;
	while (*p1 != *p2)
	{
		c = *p1;
		*p1 = *p2;
		*p2 = c;
		p1--;
		p2++;
	}
}
