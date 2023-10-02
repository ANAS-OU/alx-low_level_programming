#include <stdio.h>

/**
 * main - program that prints its
 * name to stdout.
 * @argc: counter for program parameters (integer).
 * @argv: a list of strings (pointer of pointers).
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
