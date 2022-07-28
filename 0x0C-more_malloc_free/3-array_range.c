#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * array_range - range printer
  * @min: minimum
  * @max: maximum
  * Return: integer value
  */
int *array_range(int min, int max)
{
	int *a, i, c;

	if (min > max)
		return (NULL);

	c = max - min + 1;
	a = malloc(sizeof(int) * c);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < c; i++)
		a[i] = min++;

	return (a);
}
