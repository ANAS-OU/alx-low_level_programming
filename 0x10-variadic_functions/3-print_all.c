#include "variadic_functions.h"

/**
 * print_all - function that prints all types of data.
 * @format: a list of types of arguments passed
 * to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i;
	char *str;
	char *separator = "";

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%s%c", separator, (char)va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char*);
				printf("%s%s", separator, (str) ? str : "(nil)");
				break;
			default:
				continue;
		}
		separator = ", ";
	}
	va_end(args);
	printf("\n");
}
