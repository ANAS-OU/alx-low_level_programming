#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns
 * the nth node of a dlistint_t linked list
 * @head: pointer to the first node
 *
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
