#include "main.h"

/**
 * _pow_recursion - compute the exponential
 * results
 * @x: int base number to calculate
 * @y: exponential power
 * Return: int
 */
void _pow_recursion(int x, int y)
{
	long long int l;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	l = n * _pow_recursion(x, y - 1);
	return (l);
}
