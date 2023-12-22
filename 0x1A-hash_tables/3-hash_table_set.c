#include "hash_tables.h"

/**
 * hash_table_set - a function that adds
 * an element to the hash table.
 * @ht: our hash table
 * @key: new_node key
 * @value: new_node value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t **head, *tmp, *new_node;

	if (!ht || !key)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	head = &(ht->array)[idx];

	tmp = *head;
	while (tmp)
	{
		if (!strcmp(tmp->key, key))
		{
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = (char *)key;
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (1);
}
