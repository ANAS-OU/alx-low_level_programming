#include <stdio.h>
#include "_putchar.h"
#include "main.h"

/**
 * main - Simple program that prints the word "_putchar"
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar\n";
	int length = sizeof(str) / sizeof(str[0]);
	
	for(int i=0; i<length; i++)
		_putchar(str[i]);

	return (0);
}
