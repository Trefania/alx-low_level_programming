#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creating array
 * @size: size of array to be created
 * @c: character an array is initialized with
 * Return: a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = (char *)malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
