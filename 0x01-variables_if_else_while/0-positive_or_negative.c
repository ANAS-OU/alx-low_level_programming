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
		puts("is positive\n");
	else if (n == 0)
		puts("is zero\n");
	else
		puts("is negative\n");

	return (0);
}
