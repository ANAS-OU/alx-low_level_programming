#include <stdio.h>

/**
 * jack_bauer - function that prints one day of
 * Jack Bauer life [from 00:00 to 23:59].
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
				printf("0%d:", i);
			else
				printf("%d:", i);

			if (j < 10)
				printf("0%d\n", j);
			else
				printf("%d\n", j);
		}
	}
}
