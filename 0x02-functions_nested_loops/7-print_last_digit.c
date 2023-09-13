#include<stdlib.h>

/**
 * print_last_digit - function that used to find the last digit
 * of a number.
 * @n: function param.
 *
 * Return: last digit.
 */

int print_last_digit(int n)
{
	int last_digit = abs(n) % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
