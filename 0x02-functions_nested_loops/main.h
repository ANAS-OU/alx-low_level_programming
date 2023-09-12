#include "_putchar.h"
#include<stdio.h>

/**
 * _putchar - it use the function _putchar to print a string from argement 
 * to the user console
 *
 * Return: On success 0.
 */

int _puts(char str[])
{
	int length = sizeof(&str) / sizeof(str[0]);

	for(int i=0; i < length; i++)
		_putchar(str[i]);
	
	// new line
	_putchar('\n');

	return (0);
}
