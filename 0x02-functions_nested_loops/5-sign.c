#include "main.h" /** _putchar prototype */

/**
 * print_sign - function that print sign of a number.
 * @n: param of the function.
 *
 * Return: 1 if n > 0 and 0 if n == 0
 * and finaly -1 if n < 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
