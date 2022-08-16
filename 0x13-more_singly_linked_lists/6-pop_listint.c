#include "lists.h"

/**
 * pop_listint - deletes the head
 * @head: pointer to the fist element
 *
 * Return: data or 0 if empty
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;

	free(*head);
	*head = temp;


	return (num);
}
