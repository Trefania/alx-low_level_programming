#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 *               of integers using jump search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t b, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (b = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		b = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", b, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; b < jump && array[b] < value; b++)
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
	printf("Value checked array[%ld] = [%d]\n", b, array[b]);

	return (array[b] == value ? (int)b : -1);
}