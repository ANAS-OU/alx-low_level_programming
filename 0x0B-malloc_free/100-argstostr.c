#include <stdlib.h>

/**
 * argstostr - function that concatenates all
 * the program arguments.
 * @ac: count of args.
 * @av: list of args.
 * Return: string (pointer).
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int size;
	int i, j, z;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;
	s = (char *)malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	z = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			s[z++] = av[i][j];
		s[z++] = '\n';
	}
	s[z] = '\0';
	return (s);
}
