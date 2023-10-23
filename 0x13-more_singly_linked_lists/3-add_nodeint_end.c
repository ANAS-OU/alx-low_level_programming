#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at
 * the end of a given list.
 * @head: pointer to the list head.
 * @n: the new node value.
 *
 * Return: pointer to the new list head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr; /* current head */
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
		*head = new_node;
	else
	{
		curr = *head;
		while (curr->next)
		{
			curr = curr->next;
		}
		curr->next = new_node;
	}

	return (*head);
}
