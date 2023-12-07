#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all
 * the data (n) of a dlistint_t linked list
 * @head: pointer to the first node
 *
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int rst;

	rst = 0;
	while (head)
	{
		rst += head->n;
		head = head->next;
	}
	return (rst);
}
