#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: Pointer param.
 */

void puts2(char *str)
{
	int i, lenght;

	lenght = 0;
	while (str[lenght])
		lenght++;

	for (i = 0; i <= lenght - 1; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
