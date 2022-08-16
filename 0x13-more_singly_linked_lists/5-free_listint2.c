#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of the linked list.
 */

void free_listint2(listint_t **head)
{
	lisintt_t *node;

	if (head == NULL)
		return;

	while ((node = *head) != NULL)
	{
		*head = (*head)->next;
		free(node);
	}
}
