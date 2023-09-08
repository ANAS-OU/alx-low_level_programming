#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that generate a random number and
 *		  check if it negative or positive.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* checking if n negative or positive */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		puts("%d is zero\n", n);
	else
		puts("%d is negative\n", n);

	return (0);
}
