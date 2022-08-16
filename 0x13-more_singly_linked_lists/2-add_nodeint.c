#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning.
 * @head: singly linked list.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *head;
	listint_t *new;

	*head = oldlist;

	new = malloc(sizeof(listint_t));
	if(new == NULL)
		return (NULL);
	new->n = n;
	*head = new;

	if (oldlists == NULL)
		new->next = NULL;
	else
		new->next = head;

	return (new);
}
