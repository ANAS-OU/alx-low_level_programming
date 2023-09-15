#include <stdio.h>

/**
 * main - program that finds and prints the largest
 * prime factor.
 * Return: Always 0.
 */

int main(void)
{
	int i;
	long int n, lg_fact;

	n = 612852475143;
	lg_fact = 2;

	while (n % 2 == 0)
	{
		n /= 2;
	}

	for (i = 3; i <= n; i += 2)
	{
		while (n % i == 0)
		{
			if (i > lg_fact)
				lg_fact = i;
			n /= i;
		}
	}
	printf("%ld\n", lg_fact);
}
