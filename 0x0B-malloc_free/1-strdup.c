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
	int i, len;

	len = strlen(str);
	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];
	s[i] = '\0';

	return (s);
}
