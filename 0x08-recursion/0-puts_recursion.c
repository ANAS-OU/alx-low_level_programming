#include "main.h"

/**
 * _puts_recursion - function that prints a string
 * using recusions.
 * @s: string param (pointer).
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
