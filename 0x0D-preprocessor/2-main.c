#include <stdio.h>

/**
 * main - program that prints the name of the file it was compiled from
 *
 * Return: nothing
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
