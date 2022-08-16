#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		printf("%s\n", "list is empty");
	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
