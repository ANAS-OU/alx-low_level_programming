#include <stdio.h>

/**
 * get_endianness - function that checks the endianness
 * the use owr hardware.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int n = 1; /* 0x01 */
	int first_byte = (int) ((char *)&n)[0];

	/*
	 * first_byte:
	 * 0 - big endian.
	 * 1 - little endian.
	 */
	return (first_byte);
}
