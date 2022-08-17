#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: double pointer
 */

void free_listint2(listint_t **head)
{
	lisint_t *oldlist;

	if (head == NULL)
	return;

	while (*head != NULL)
	{
		oldlist = *head;
		*head = (*head)->next;
		free(oldlist);
	}
}
