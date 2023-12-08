#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node
 * at index <index> of a <dlistint_t> linked list.
 * @head: first node
 * @index: node position
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev, *curr, *next;
	unsigned int i;

	if (!*head)
		return (-1);

	if (!index)
	{
		curr = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
	}
	else
	{
		curr = *head;
		for (i = 0; i < index - 1; i++)
		{
			if (!curr)
				return (-1);
			prev = curr;
			curr = curr->next;
		}
		next = curr->next;
		next->prev = prev;
		prev->next = next;
	}
	free(curr);
	return (1);
}
