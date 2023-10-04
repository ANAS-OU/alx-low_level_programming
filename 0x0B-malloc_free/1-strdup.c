#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of a given string.
 * @str: Original string.
 * Return: Copy string.
 */
char *_strdup(char *str)
{
	char *s;
	int i, size;

	if (str == NULL)
		return (NULL);
	size = strlen(str) + 1;
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = str[i];

	return (s);
}
