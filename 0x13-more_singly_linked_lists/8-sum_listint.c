#include "lists.h"

/**
 * sum_listint - get the sum of all `n` of `listint_t` list
 * @head: pointer to head
 * Return: sum of all int `n`
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *oldlist;

	for (sum = 0, oldlist = head; oldlist != NULL; oldlist = oldlist->next)
	sum += oldlist->n;

	return (sum);
}
