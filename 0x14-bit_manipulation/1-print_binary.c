#include "main.h"

/**
 * print_binary - function that prints the binary
 * representation of a number.
 * @n: the given number.
 *
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');
	else
		recursion_print(n);
}

/**
 * recursion_print - function that use recurtion
 * to print a binary number bits.
 * @n: input integer number.
 *
 * Return: nothing
 */
void recursion_print(unsigned long int n)
{
	unsigned int digit;

	if (!n)
		return;

	digit = n & 1;
	recursion_print(n >> 1);
	_putchar(digit + '0');
}
