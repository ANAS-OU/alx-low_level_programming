#include "_putchar.c"

/**
 *
 * function - that print the alphabet in lowercase
 * only using _putchar twice.
 *
 */

void print_alphabet(void)
{
	char i;

	for(i='a'; i<='z'; i++)
		_putchar(i);

	_putchar('\n');
}
