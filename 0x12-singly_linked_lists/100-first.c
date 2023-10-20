#include <stdio.h>
void me_first(void) __attribute__((constructor));

/**
 * me_first - function that prints to the stdout a string
 * before the main function is executed.
 *
 * Return: nothing.
 */
void me_first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
