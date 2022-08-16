#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning.
 * @head: singly linked list.
 * @n: address in the new node
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *oldlist;
	listint_t *new;

	oldlist = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	*head = new;

	if (oldlist == NULL)
		new->next = NULL;
	else
		new->next = oldlist;

	return (new);
}
