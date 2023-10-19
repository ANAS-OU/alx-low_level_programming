#include "lists.h"

/**
 * list_len - function that returns the number
 * of nodes in a linked list.
 * @h: pointer to the list head.
 *
 * Return: nodes number of the given list.
 */
size_t list_len(const list_t *h)
{
	unsigned int count;

	count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
