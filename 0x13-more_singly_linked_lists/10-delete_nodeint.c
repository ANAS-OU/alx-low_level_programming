#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes a node
 * by its given index.
 * @head: double pointer to list head.
 * @index: wanted node's index.
 *
 * Return: (1)On success, (-1)when failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev; /* previous node */
	listint_t *curr; /* current node */
	unsigned int i;

	if (!head || !*head)
		return (-1);

	curr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(curr);
	}
	else
	{
		for (i = 0; i < index; i++)
		{
			if (!curr->next)
				return (-1);
			prev = curr;
			curr = curr->next;
		}
		prev->next = curr->next;
		free(curr);
	}

	curr = NULL;
	return (1);
}
