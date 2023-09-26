/**
 * _strstr - function that locates a substring.
 * @haystack: pointer param 1.
 * @needle: pointer param 2.
 * Return: pointer for the substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *a)
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
