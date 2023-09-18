#include <unistd.h>

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @s: Pointer param.
 */

void print_rev(char *s)
{
	int i, j;
	char c;

	i = 0;
	c = '\n';
	while (*s)
	{
		i++;
		s++;
	}

	while (i >= 0)
	{
		write(1, s, 1);
		s--;
		i--;
	}
	write(1, &c, 1);
}
