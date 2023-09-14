#include "main.h"
#include <stdio.h>
/**
 * main - program that prints first 50 Fibonacci numbers, starting
 * with 1 and 2, separated by a comma followed by a space.
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long fib_1 = 0, fib_2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = fib_1 + fib_2;
		printf("%lu", sum);

		fib_1 = fib_2;
		fib_2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
