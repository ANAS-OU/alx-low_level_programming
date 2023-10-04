#include <stdlib.h>
#include <string.h>

/** str_concat - function that concatenates
 * two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: s1 + s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, size;

	size = 1 + strlen(s1) + strlen(s2);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	for (; *s1 != '\0'; s1++)
	{
		s[i] = *s1;
		i++;
	}
	for (; *s2 != '\0'; s2++)
	{
		s[i] = *s2;
		i++;
	}
	s[i] = '\0';
	return (s);
}
