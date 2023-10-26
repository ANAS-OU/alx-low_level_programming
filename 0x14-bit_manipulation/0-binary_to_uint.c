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

	if (!b)
		return (0);

	cn = 0;
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		cn = cn << 1;
		cn = cn | (*b - '0');
		b++;
	}

	return (cn);
}
