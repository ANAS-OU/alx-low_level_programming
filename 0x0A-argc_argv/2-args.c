#include <stdio.h>

/**
 * main - program that prints all the args to stdout.
 * @argc: counter for program parameters (integer).
 * @argv: a list of strings (pointer of pointers).
 * Return: always 0.
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
