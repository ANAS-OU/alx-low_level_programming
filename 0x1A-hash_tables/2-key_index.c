#include "hash_tables.h"

/**
 * key_index - a function that gives
 * you the index of a key.
 * @key: the key (string)
 * @size: array size
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	idx = hash_djb2(key) % size;
	return (idx);
}
