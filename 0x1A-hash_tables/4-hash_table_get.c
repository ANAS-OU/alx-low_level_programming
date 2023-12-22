#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves
 * a value associated with a key.
 * @ht: our hash table
 * @key: looking node key
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	long unsigned int idx;
	hash_node_t *head;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	head = ht->array[idx];

	while (head)
	{
		if (!strcmp(head->key, key))
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
