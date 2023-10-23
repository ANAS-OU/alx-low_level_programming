#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * of a given list and returns its value.
 * @head: double pointer to list head.
 *
 * Return: the deleted node data.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (!head || !*head)
		return (0);

	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	tmp = NULL;
	return (n);
}
