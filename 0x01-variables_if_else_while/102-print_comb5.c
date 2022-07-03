#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 *  *main - prints to the screen using puts function
 *
 *  *Return: If successful the exit status is zero
 *
 */

int main(void)
{

	int i, j;

	for (i = 0; i <= 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(32);
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar('\n');

	return (0);

}
