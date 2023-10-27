/**
 * get_bit - function that returns the bit value
 * at the given possition.
 * @n: integer as input
 * @index: possition.
 *
 * Return: the bit value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;
	
	if (index >= sizeof(n) * 8)
		return (-1);

	n = n >> index;
	bit = n & 1;
	return (bit);
}
