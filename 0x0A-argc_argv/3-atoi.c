#include <stdbool.h>

/**
 * _atoi - function that converts a string to an integer.
 * @s: pointer param.
 * Return: nb.
 */

int _atoi(char *s)
{
	int i, sign;
	unsigned int nb;

	nb = 0;
	sign = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign++;

		if (s[i] >= '0' && s[i] <= '9')
			nb = nb * 10 + s[i] - '0';

		if (nb > 0 && (s[i] < '0' || s[i] > '9'))
			break;
	}

	if (sign % 2 != 0)
		nb = -nb;

	return (nb);
}
