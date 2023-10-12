#include "variadic_functions.h"

/**
 * print_strings - function that prints string
 * given as parameters, followed by a new line.
 * @separator: pointer to a separating string.
 * @n: the given strings count.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		printf("%s", (str) ? str : "(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
