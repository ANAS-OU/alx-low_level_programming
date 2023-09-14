#include <stdio.h>

/**
 * print_times_table - function that prints
 * the n times table starting with 0.
 * @n: param.
 */

void print_times_table(int n)
{
	if (n < 15 && n >= 0)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			j = 0;
			printf("%d", i * j);
			for (j = 1; j <= n; j++)
			{
				if (i * j < 10)
					printf(",   %d", i * j);
				else if (i * j < 100)
					printf(",  %d", i * j);
				else
					printf(", %d", i * j);
			}
			printf("\n");
		}
	}
}
