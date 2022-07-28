#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * string_nconcat - this is string concatenation.
  * @s1: parameter 1
  * @s2: parameter 2
  * @n: parameter 3
  * Return: string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int  length = n, t;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (t = 0; s1[t]; t++)
		length++;
	concat = (char *)malloc(sizeof(char) * length + 1);
	if (concat == NULL)
		return (NULL);
	length = 0;
	for (t = 0; s1[t]; t++)
		concat[length++] = s1[t];
	for (t = 0; s2[t] && t < n; t++)
	concat[length++] = s2[t];

	concat[length] = '\0';
	return (concat);
}
