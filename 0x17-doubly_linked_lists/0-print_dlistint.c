#include "lists.h"

/**
 * print_dlistint - a function that prints all
 * elements of a dlistint_t list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
