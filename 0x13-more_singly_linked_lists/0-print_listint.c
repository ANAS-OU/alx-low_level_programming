#include "lists.h"

/**
 * print_listint - function that prints all
 * the elements of a list.
 * @h: pointer to the head of a list.
 *
 * Return: number of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
