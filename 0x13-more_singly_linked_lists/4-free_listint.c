#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_listint(listint_t *head)
{
	listint_t *oldlist;

	while ((oldlist = head) != NULL)
	{
		head = head->next;
		free(oldlist);
	}
}
