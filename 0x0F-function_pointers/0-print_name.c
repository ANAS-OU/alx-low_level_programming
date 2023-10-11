#include <stddef.h>

/**
 * print_name - function that uses a pointer to an other
 * function to print a name.
 * @name: the name to print.
 * @f: pointer to an other function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
