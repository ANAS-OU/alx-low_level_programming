#include "main.h"

/**
 * puts_half - function that prints half of a string
 * followed by a new line.
 * @str: pointer param.
 */

void puts_half(char *str)
{
	int i, n, lenght;

	i = 0;
	lenght = 0;
	while (str[i])
	{
		lenght++;
		i++;
	}

	n = (lenght + 1) / 2;
	for (; n < lenght; n++)
		_putchar(str[n]);

	_putchar('\n');
}
