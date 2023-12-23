#include "hash_tables.h"

/**
 * hash_table_print - a function that prints
 * a hash table.
 * @ht: a given hash table to print
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head;
	unsigned long int i;
	int not_first = 0;

	if (!ht)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		while (head)
		{
			if (not_first)
				printf(", ");

			printf("'%s': '%s'", head->key, head->value);
			not_first = 1;
			head = head->next;
		}
	}
	putchar('}');
	putchar('\n');
}
