/**
 * leet - function that encodes a string into 1337.
 * @str: pointer param.
 * Return: string in 1337.
 */

char *leet(char *str)
{
	char *p = str;

	while (*str)
	{
		if (*str == 'a' || *str == 'A')
			*str = '4';
		if (*str == 'e' || *str == 'E')
			*str = '3';
		if (*str == 'o' || *str == 'O')
			*str = '0';
		if (*str == 't' || *str == 'T')
			*str = '7';
		if (*str == 'l' || *str == 'L')
			*str = '1';
		str++;
	}
	return (p);
}
