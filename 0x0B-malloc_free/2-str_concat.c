#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates
 * two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: s1 + s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, size, s1_len, s2_len;

	if (s1 == NULL)
		s1_len = 0;
	else
		s1_len = strlen(s1);

	if (s2 == NULL)
		s2_len = 0;
	else
		s2_len = strlen(s2);

	size = 1 + s1_len + s2_len;
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	for (j = 0; j < s1_len; j++)
	{
		s[i] = s1[j];
		i++;
	}
	for (j = 0; j < s2_len; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
