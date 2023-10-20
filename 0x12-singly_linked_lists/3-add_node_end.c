#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * of a list.
 * @head: double pointer to head of the list.
 * @str: pointer to a string as value to the new node.
 *
 * Return: pointer the list head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *curr, *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		curr = *head;
		while (curr->next)
			curr = curr->next;
		curr->next = new_node;
	}

	return (*head);
}
