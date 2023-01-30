#include "search_algos.h"

/**
 * linear_search - search for a given value in an array
 * @value: value searched for
 * @array: integer array to search through
 * @size: size of the array
 * Return: index of 1st occurence OR NULL if it doesn't exist
 */

int linear_search(int *array, size_t size, int value)
{
	size_t b;

	if (!array)
	{
		return (-1);
	}
	for (b = 0; b < size; b++)
	{
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		if (value == array[b])
		{
			return (b);
		}
	}
	return (-1);
}

