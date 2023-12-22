#include "hash_tables.h"

/**
 * hash_table_create - a function that
 * creates a hash table.
 * @size: the array size
 *
 * Return: pointer to the created hash table,
 * or NULL in case of something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	long unsigned int i;

	new_ht = malloc(sizeof(hash_table_t));
	if (!new_ht)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(size * sizeof(char *));

	if (!(new_ht->array))
	{
		free(new_ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new_ht->array[i] = NULL;

	return (new_ht);
}
