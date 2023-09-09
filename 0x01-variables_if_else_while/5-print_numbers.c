#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program prints from 0 to 9
 *
 * Return: 0
 **/

int main(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
