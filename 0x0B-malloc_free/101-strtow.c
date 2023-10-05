#include <stdlib.h>
/**
 * strtow - function that splits a string into words.
 * @str: the given string.
 * Return: pointer to pointers.
 */
char **strtow(char *str)
{
	char **s;
	int wc, i, j, y = 0;

	if (str == NULL)
		return (NULL);
	wc = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
			if (str[i + 1] == ' ')
				wc++;
	}
	s = (char **)malloc((wc + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < wc; i++)
	{
		s[i] = (char *)malloc(sizeof(char *));
		if (s[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(s[j]);
			free(s);
			return (NULL);
		}
	}
	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			s[j][y++] = str[i];
			if (str[i + 1] == ' ')
			{
				s[j++][y] = '\0';
				y = 0;
			}
		}
	}
	return (s);
}
