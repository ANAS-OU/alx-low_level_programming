#include <stdio.h>

/**
 * times_table - function prints the 9 times table
 * that start with 0.
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		j = 0;
		printf("%d", i * j);
		for (j = 1; j <= 9; j++)
		{
			if (i * j < 10)
				printf(",  %d", i * j);
			else
				printf(", %d", i * j);
		}
		printf("\n");
	}
}
