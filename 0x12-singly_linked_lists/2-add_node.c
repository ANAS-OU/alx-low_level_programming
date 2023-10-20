#include "lists.h"

/**
 * add_node - function that adds a new node
 * at the beginning of a linkded list.
 * @head: double pointer to list head.
 * @str: pointer to a string.
 *
 * Return: pointer to the head of the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
