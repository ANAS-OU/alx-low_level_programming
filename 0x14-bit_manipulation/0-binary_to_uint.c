#include "main.h"
#include "unistd.h"

/**
 * binary_to_uint - function that convert a number
 * from base_2 to base_10.
 * @b: pointer to a string of bits.
 *
 * Return: converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int cn;
	int exp;

	if (!b)
		return (1);

	while (*b)
	{
		if (!(*b <= '1' && *b >= '0'))
			return (0);
		b++;
	}

	exp = 0;
	cn = 0;
	b--;
	while (*b)
	{
		cn += (*b - 48) * pwr(2, exp++);
		b--;
	}
	return (cn);
}

/**
 * pwr - function that return value of number
 * to a given power.
 * @base: param 1 (integer)
 * @exp: param 2 (integer)
 *
 * Return: result.
 */
int pwr(int base, int exp)
{
	int value;

	if (exp == 0)
		return (1);

	value = 1;
	while (exp--)
		value *= base;
	return (value);
}
