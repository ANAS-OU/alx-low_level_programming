#include <unistd.h>

/**
 * puts2 - function that prints a string, followed
 * by a new line to stdout.
 * @str: Pointer param.
 */

void puts2(char *str)
{
	char c;

	c = '\n';
	while (*str)
	{
		write(1, str, 1);
		str += 2;
	}
	write(1, &c, 1);
}
