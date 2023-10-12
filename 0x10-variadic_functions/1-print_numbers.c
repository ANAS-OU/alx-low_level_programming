#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 * @separator: separating string.
 * @n: numbers count to print.
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator)
			printf("%s", separator);
	}

	printf("%d", va_arg(args, int));
	printf("\n");
	va_end(args);
}
