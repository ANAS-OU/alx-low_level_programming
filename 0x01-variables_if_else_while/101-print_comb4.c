#include<stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Program that prints all possible
 *
 * Return: 0
 */

int main(void)
{
	int i = '0';
	int j;
	int k;

	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j +	1;
			while (k <= '9')
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != '7' || j != '8')
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
