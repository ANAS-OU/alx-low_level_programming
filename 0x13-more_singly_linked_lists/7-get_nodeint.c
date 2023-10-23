#include "lists.h"

/**
 * get_nodeint_at_index - function that returns a node
 * by its given index.
 * @head: pointer to list head.
 * @index: wanted node index.
 *
 * Return: the wanted node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (!head->next)
			return (NULL);
		head = head->next;
	}
	return (head);
}
