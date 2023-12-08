#include "lists.h"

/**
 * insert_dnodeint_at_index -  a function that
 * inserts a new node at a given position
 * @h: pointer to the first node
 * @idx: new node position
 * @n: the new node data
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *curr;
	unsigned int i;

	if (!*h && idx)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
	}
	else
	{
		curr = *h;
		for (i = 0; i < idx - 1; i++)
		{
			if (!curr)
			{
				free(new_node);
				return (NULL);
			}
			curr = curr->next;
		}
		new_node->prev = curr;
		new_node->next = curr->next;
		curr->next = new_node;
	}
	return (new_node);
}
