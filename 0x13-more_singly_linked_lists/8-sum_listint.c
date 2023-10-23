#include "lists.h"

/**
 * sum_listint - function that returns the sum
 * of all node's data of a given list.
 * @head: pointer to the list head.
 *
 * Return: the sum of data.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
