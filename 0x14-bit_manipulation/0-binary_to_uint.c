#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	int a, k;

	if (!b)
		return (0);

	for (a = 0; b[a]  != '\0'; a++)
		;

	for (a--, k = 1; a >= 0; a--, k *= 2)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}

		if (b[a] & 1)
		{
			i += k;
		}
	}

	return (i);

}
