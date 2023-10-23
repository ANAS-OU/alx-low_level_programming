#include "lists.h"

/**
 * free_listint - function that frees all elements
 * of a given list.
 * @head: pointer to the list head.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	printf("-----------------\n");
	while (head)
	{
		tmp = head;
		printf("%p\n", (void *)head);
		head = head->next;
		free(tmp);
	}
	printf("%p\n", (void *)head);
}
