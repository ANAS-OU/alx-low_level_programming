/**
 * cap_string - function that capitalizes all words
 * of a string.
 * @str: pointer param.
 * Return: Capitalized String.
 */

char *cap_string(char *str)
{
	char *p = str;

	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
		str++;
	}

	while (*str != '\0')
	{
		if (*str < '0' || (*str > '9' && *str < 'A') || *str > 'z')
		{
			str++;
			if (*str >= 'a' && *str <= 'z')
				*str -= 32;
			str--;
		}
		str++;
	}
	return (p);
}
