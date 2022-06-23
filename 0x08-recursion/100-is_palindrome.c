#include "main.h"

/**
 * is_palindrome - checks if string is
 * palindrome or not.
 * @s: string to check if its palindrome.
 * Return: 1 if string is palindrome
 * or 0 if string is not palindrome.
 */
int is_palindrome(char *s)
{
	int i, r, k = 0, p;

	r = is_palindr(s, 0);
	p = r;
	for (i = 0; i <= p / 2; i++)
	{
		if (*(s + i) == *(s + (r - 1)))
			k++;
		r--;
	}
	if (k >= p / 2)
		return (1);
	else
		return (0);
}
/**
 * is_palindr - peforms the recursive
 * @s: char pointer
 * @n: iterator
 * Return: int, the size of string
 */
int is_palindr(char *s, int n)
{
	int j = 0, l;

	if (*(s + j) == '\0')
		return (n);
	l = is_palindr((s + 1), n + 1);
	return (l);
}
