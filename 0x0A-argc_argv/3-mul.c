#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers and prints
 * the result to stdout.
 * @argc: counter for program parameters (integer).
 * @argv: a list of strings (pointer of pointers).
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	int i, mult;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	mult = 1;
	for (i = 1; i < argc; i++)
		mult *= atoi(argv[i]);
	printf("%d\n", mult);
	return (0);
}
