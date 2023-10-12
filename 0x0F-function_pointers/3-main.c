#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - program that performs simple operations
 * @argc: the count of argments.
 * @argv: the array of argments.
 *
 * Return: result of operatoin followed by a new line.
 */
int main(int argc, char **argv)
{
	int rst;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[3]) == 0 && (!strcmp(argv[2], "/") || !strcmp(argv[2], "%")))
	{
		printf("Error\n");
		exit(100);
	}
	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	rst = operation(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", rst);
	return (0);
}
