#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that prints the alphabet in lowercase withour e
 *
 * Return: 0
 **/

int main(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
		n++;
	}
	putchar ('\n');
	return (0);
}
