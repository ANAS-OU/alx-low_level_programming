#include <unistd.h>

/**
 * _puts - function that prints a string, followed
 * by a new line to stdout.
 * @str: Pointer param.
 */

void _puts(char *str)
{
	char c;

	c = '\n';
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, &c, 1);
}
