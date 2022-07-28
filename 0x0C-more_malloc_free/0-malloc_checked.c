#include "main.h"

/**
 * malloc_checked -> function should cause normal process termination with a status value of 98
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);
}
