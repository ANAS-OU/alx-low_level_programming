/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @str: pointer param
 * Return: uppercase string.
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (p);
}
