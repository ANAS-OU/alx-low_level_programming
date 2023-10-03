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
	char *c;
	unsigned int sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);

		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
