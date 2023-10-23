#include "lists.h"

/**
 * free_listint2 - function that frees a given list.
 * @head: pointer to the list head.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
	tmp = NULL;
}
