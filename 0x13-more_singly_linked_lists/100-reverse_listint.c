#include "lists.h"

/**
 * reverse_listint - function that reverses a given list.
 * @head: double pointer to the list head.
 *
 * Return: pointer to the reversed list head.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr;
	listint_t *tmp;

	if (!head || !*head)
		return (NULL);

	curr = (*head)->next;
	(*head)->next = NULL;
	while (curr)
	{
		tmp = curr->next;
		curr->next = *head;
		*head = curr;
		curr = tmp;
	}
	return (*head);
}
