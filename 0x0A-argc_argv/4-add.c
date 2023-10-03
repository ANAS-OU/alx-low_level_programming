#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that computes the addition of positive
 * numbers and prints the result to stdout.
 * @argc: counter for program parameters (integer).
 * @argv: a list of strings (pointer of pointers).
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int i;
	unsigned int sum;

	if (argc < 2)
	{
		printf("0\n");
		exit(EXIT_SUCCESS);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
