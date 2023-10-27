/**
 * set_bit - function that sets the value of a bit to 1
 * at a given possition.
 * @n: pointer to the number.
 * @index: bit possition.
 *
 * Return: 1 on success. -1 when failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int ch_bit;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	ch_bit = 1;
	for (i = 0; i < index; i++)
		ch_bit = ch_bit << 1;
	*n = *n | ch_bit;
	return (1);
}
