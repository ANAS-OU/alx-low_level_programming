#include <stdio.h>

/**
 * main - program that finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int a, k, next, sum;

	a = 1;
	k = 2;
	sum = 0;

	for (i = 1; i <= 33; ++i)
	{
		if (a < 4000000 && (a % 2) == 0)
			sum = sum + a;
		next = a + k;
		a = k;
		k = next;
	}

	printf("%lu\n", sum);

	return (0);
}
