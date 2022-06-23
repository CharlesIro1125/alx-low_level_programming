#include "main.h"

/**
 * factorial - prints the factorial
 *
 * @n: int number to calculate its
 * factorial
 * Return: int
 */
int factorial(int n)
{
	int l;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	l = n * factorial(n - 1);
	return (l);
}
