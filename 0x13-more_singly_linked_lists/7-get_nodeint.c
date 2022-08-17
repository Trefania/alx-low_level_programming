#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of listint_t list
 * @head: pointer to head node
 * @index: index to find list, starting at 0
 * Return: pointer to node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *oldlist;
	unsigned int n;

	oldlist = head;
	n = 0;
	while (n < index)
	{
	if (oldlist)
	oldlist = oldlist->next;
	else
	return (NULL);
	n++;
	}

	if (oldlist)
	return (oldlist);
	else
	return (NULL);
}
