#include "main.h"
#include "_putchar.c"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: func param.
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
