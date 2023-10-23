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

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
