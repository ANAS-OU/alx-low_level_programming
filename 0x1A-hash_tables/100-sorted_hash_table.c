#include "hash_tables.h"

/**
 * shash_table_create - a function that
 * creates a sorted hash table.
 * @size: the array size
 *
 * Return: pointer to the created hash table,
 * or NULL in case of something went wrong.
 */
shash_table_t *shash_table_create(unsigned long int size)
{

	shash_table_t *new_ht;

	new_ht = malloc(sizeof(shash_table_t));
	if (!new_ht)
		return (NULL);

	new_ht->size = size;
	new_ht->array = malloc(size * sizeof(char *));

	if (!(new_ht->array))
	{
		free(new_ht);
		return (NULL);
	}

	return (new_ht);
}

/**
 * shash_table_set - a function that adds
 * an element to the hash table.
 * @ht: our sorted hash table
 * @key: new_node key
 * @value: new_node value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)


/**
 * shash_table_get - a function that retrieves
 * a value associated with a key.
 * @ht: our hash table
 * @key: looking node key
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key);


/**
 * shash_table_print - a function that prints
 * a hash table.
 * @ht: a given hash table to print
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht);


/**
 * shash_table_delete - a function that
 * deletes a given hash table.
 * @ht: hash table to delete
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht);
