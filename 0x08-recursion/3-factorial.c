#include "main.h"

/**
 * factorial - function factorial
 * @n: numberi
 * Description: find factorial of n using recursion
 * Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
	{
		return (1);
	}
	else
	{
		n = factorial(n - 1) * n;
		return (n);
	}
}
