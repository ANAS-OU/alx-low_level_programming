#include <stdio.h>
void me_first(void) __attribute__((constructor)); /* prototype */


/**
 * me_first - function that prints to the stdout
 * a string before the main function is executed.
 *
 * Return: nothing.
 */
void me_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
