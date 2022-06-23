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
	int r, p;

	r = string_len(s, 0);
	p = compare_char(s, r, 0);
	return (p);
}
/**
 * string_len - gets the length of
 * string
 * @s: char pointer
 * @n: iterator
 * Return: int, the size of string
 */
int string_len(char *s, int n)
{
	int j = 0, l;

	if (*(s + j) == '\0')
		return (n);
	l = string_len((s + 1), n + 1);
	return (l);
}
/**
 * compare_char - function to compare the
 * characters
 * @s: string pointer
 * @r: int length of string
 * @c: iterator
 * Return: int, 1 if string is palindrome
 * or 0 if string is not
 */
int compare_char(char *s, int r, int c)
{
	int g;

	if (c == r / 2)
		return (1);
	g = compare_char(s, r, c + 1);

	if (g)
	{
		if (*(s + c) == *(s + (r - c - 1)))
			return (1);
		else
			return (0);
	}
	else
		return (0);
}
