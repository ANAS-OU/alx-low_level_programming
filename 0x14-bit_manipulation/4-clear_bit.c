/**
 * clear_bit - function that sets a bit value to 0
 * at a given position.
 * @n: position to the number.
 * @index: position.
 *
 * Return: 1 on success, -1 when failed.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ch_bit;

	if (index > sizeof(*n) * 8)
		return (-1);

	ch_bit = ~(1 << index);
	*n = *n & ch_bit;
	return (1);
}
