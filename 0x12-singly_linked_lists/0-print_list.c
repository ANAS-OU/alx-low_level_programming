#include "lists.h"

/**
 * print_list - function that prints all
 * the elements of a given.
 * @h: pointer to the list head.
 *
 * Return: nodes number of the given list.
 */
size_t print_list(const list_t *h)
{
	unsigned int count;

	count = 0;
	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		count++;
	}
	return (count);
}
