#include "lists.h"

/**
 * get_dnodeint_at_index - returns data of nth node
 * @head: head of node
 * @index: index wanted
 * Return: data of nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t a = 0;

	while (head != NULL)
	{
		if (a == index)
			break;
		a++;
		head = head->next;
	}

	return (head);
}
