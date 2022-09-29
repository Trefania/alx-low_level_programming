#include "lists.h"

/**
 * sum_dlistint - returns the sum of all nodes data
 * @head: head of node
 * Return: sums of node data
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
