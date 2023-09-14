#include <stdio.h>

/**
 * main - program that prints the multiples
 * sum of a and b that less than 10.
 *
 * Return: 0
 */

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < 10; i++)
	{
		if (!(i % 3) || !(i % 5))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
