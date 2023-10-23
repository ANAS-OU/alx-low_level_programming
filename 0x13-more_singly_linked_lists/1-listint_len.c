#include "lists.h"

/**
 * listint_len - function that returns the number
 * of elements in a given list.
 * @h: pointer to the head of the list.
 *
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
