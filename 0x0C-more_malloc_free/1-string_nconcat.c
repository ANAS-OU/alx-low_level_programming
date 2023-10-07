#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates
 * two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of characters wanted from s2.
 * Return: pointer to s1 + n character from s2.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int size;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	size = strlen(s1) + n + 1;
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		s[i++] = *s1++;
	for (j = 0; j < n; j++)
		s[i++] = s2[j];
	s[i] = '\0';
	return (s);
}
