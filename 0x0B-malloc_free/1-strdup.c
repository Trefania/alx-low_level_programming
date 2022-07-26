#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which make duplicates
 * @str: string to be duplicad
 * Return: a string pointer
 */
char *_strdup(char *str)
{
	int i = 1, j = 0;
	char *a;

	if  (str == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		a = (char *) malloc(i * sizeof(char) + 1);
	if (a == NULL)
		return (NULL);
	while (j < i)
	{
		a[j] = str[j];
		j++;
	}
		a[j] = '\0';
		return (a);
}
