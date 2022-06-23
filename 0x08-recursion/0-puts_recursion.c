#include "main.h"

/**
 * _puts_recursion - prints string
 * using recursion
 * @s: a string argument
 * Return: void
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*(s + i));
	i++;
	_puts_recursion((s + i));
}
