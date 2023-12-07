#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: pointer to the first node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
