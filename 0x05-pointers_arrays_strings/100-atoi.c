/**
 * _atoi - function that converts a string to an integer.
 * @s: pointer param.
 * Return: nb.
 */

int _atoi(char *s)
{
	int i, nb;

	i = 0;
	nb = 0;
	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			i++;
		//	if (*(s++) < '0' || *(s++) > '9')
		//		break;
		}
		s++;
	}

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			if (i > 0)
			{
				nb += *s * i;
			i--;
		}
		s++;
	}
	return (nb);
}
