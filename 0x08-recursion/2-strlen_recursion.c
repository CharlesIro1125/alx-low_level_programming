#include "main.h"

/**
 * _strlen_recursion - prints the length of
 * string
 *
 * @s: string to be printed in reverse
 * Return: int
 */
void _strlen_recursion(char *s)
{
	int i = 0, l;

	if (*(s + i) == '\0')
	{
		return (0);
	}
	l = _strlen_recursion((s + 1));
	return (l + 1);
}
