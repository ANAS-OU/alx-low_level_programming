#include "main.h"

/**
 * print_number - function that prints integers using
 * the function _putchar.
 * @n: func param.
 */

void print_number(int n)
{
	unsigned int nb;

	if (n < 0)
	{
		_putchar('-');
		nb = -n;
	}
	else
		nb = n;

	if (nb / 10)
		print_number(nb / 10);
	_putchar(nb%10 + '0');
}
