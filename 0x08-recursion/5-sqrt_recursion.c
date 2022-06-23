#include "main.h"

/**
 * _sqrt_recursion - compute the natural
 * square root
 * @n: the int to compute on
 * Return: int
 */
int _sqrt_recursion(int n)
{
	long int r;

	r = sqrt_recur(n, 1);
	return (r);
}
/**
 * sqrt_recur - performs recursive
 * calculation
 * @x: int to find its natural square root
 * @n: int multiplier
 * Return: int
 */
int sqrt_recur(int x, int n)
{
	long int l;

	if (n < 0)
		return (-1);
	if ((n * n) == x)
		return (n);
	if ((n * n) > x)
		return (-1);
	l = sqrt_recur(x, n + 1);
	return (l);
}
