/**
 * cap_string - function that capitalizes all words
 * of a string.
 * @str: pointer param.
 * Return: Capitalized String.
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}
	while (str[i])
	{
		if (str[i] < '0' || (str[i] > '9' && str[i] < 'A') || str[i] > 'z')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		i++;
	}

	return (str);
}
