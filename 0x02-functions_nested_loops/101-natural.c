#include <stdio.h>
#include "main.h"

/**
 * _start - function that prints the multiples
 * sum of a and b that less than 10.
 * @a: param 1.
 * @b: param 2.
 */

void _start(int a, int b)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < 10; i++)
	{
		if (!(i % a) || !(i % b))
			sum += i;
	}
	printf("%d\n", sum);
}
