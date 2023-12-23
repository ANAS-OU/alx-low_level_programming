#include "hash_tables.h"

/**
 * hash_table_delete - a function that
 * deletes a given hash table.
 * @ht: hash table to delete
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			free(head->key);
			free(head->value);
			free(head);
			head = head->next;
		}
	}
	free(ht->array);
	free(ht);
}
