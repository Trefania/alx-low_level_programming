#include "lists.h"

/**
 * add_node - add a new node at end of a linked list
 * @head: address of beginning of string
 * @str: string to add to new node
 * Return: address of new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
