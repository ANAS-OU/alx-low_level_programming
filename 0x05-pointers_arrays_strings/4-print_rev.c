#include <unistd.h>

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @s: Pointer param.
 */

void print_rev(char *s)
{
	char c = '\n';

	while (*s)
		s++;

	s--;
	while (*s)
	{
		write(1, s, 1);
		s--;
	}
	write(1, &c, 1);
}
