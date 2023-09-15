#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: func param.
 */

void print_diagonal(int n)
{
	int i, space, count;

	if (n <= 0)
		_putchar('\n');

	space = 0;
	while (n > 0)
	{
		count = space;
		for (i = 0; i < count; i++)
			_putchar(' ');
		
		space++;
		_putchar(92);
		_putchar('\n');
		n--;
	}
}
