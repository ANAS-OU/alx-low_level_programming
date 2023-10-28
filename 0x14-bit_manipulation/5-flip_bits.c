/**
 * flip_bits - function that counts the number of bits would
 * need to flip to get from one number to another.
 * @n: first number.
 * @m: second number.
 *
 * Return: bits number need to flip
 * to go from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	count = 0;
	while (n || m)
	{
		if ((n & 1) != (m & 1))
			count++;

		n = n >> 1;
		m = m >> 1;
	}
	return (count);
}
