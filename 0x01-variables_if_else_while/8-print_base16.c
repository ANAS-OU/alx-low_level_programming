#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that prints reverse alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char n = 'a';
	int x = '0';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar ('\n');
	return (0);
}
