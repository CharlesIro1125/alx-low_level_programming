#include "main.h"

/**
 * is_prime_number - compute the prime
 * number
 * @n: the int to compute on
 * Return: int
 */
int is_prime_number(int n)
{
	long long int r;

	r = prime_recur(n, 2);
	return (r);
}
/**
 * prime_recur - performs recursive
 * calculation
 * @x: int to find its prime number
 * @n: int iterator
 * Return: int
 */
int prime_recur(int x, int n)
{
	long long int l;

	if (n < 2)
		return (0);
	else if ((x % n) == 0 && n == x)
		return (1);
	else if ((x % n) == 0 && n != x)
		return (0);
	else if (n > x)
		return (0);
	l = prime_recur(x, n + 1);
	return (l);
}
