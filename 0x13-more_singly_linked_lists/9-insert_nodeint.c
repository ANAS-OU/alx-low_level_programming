#include "lists.h"

/**
 * insert_nodeint_at_index - function that adds a new node
 * at a given position and returns its address.
 * @head: double pointer to the list head.
 * @idx: insert position.
 * @n: the new node data.
 *
 * Return: pointer to the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *curr;
	unsigned int i;

	if (!head)
		return (NULL);

	curr = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (!curr-next)
			return (NULL);
		curr = curr->next;
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = curr->next;
	curr->next = new_node;
	return (new_node);
}
