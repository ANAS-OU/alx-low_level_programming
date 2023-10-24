#include "lists.h"

/**
 * print_listint_safe - function that prints a given list
 * regardless if it's not a null determination list.
 * @head: pointer to the list head.
 *
 * Return: number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *prev, *curr;
	size_t count;

	count = 0;
	curr = head;
	prev = curr;
	while (curr)
	{
		if (print_checker(head, prev, curr))
		{
			printf("-> [%p] %d\n", (void *)curr, curr->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)curr, curr->n);
		prev = curr;
		curr = curr->next;
		count++;
	}

	return (count);
}

/**
 * print_checker - function that checks if data
 * already was printed.
 * @head: pointer to list head.
 * @prev: last node to check at.
 * @curr: node we want to check with.
 *
 * Return: 1 on success
 * 0 when nothing found.
 */
int print_checker (const listint_t *head, const listint_t *prev, const listint_t *curr)
{
	while (head != prev)
	{
		if (head == curr)
			return (1);
		head = head->next;
	}
	return (0);
}

