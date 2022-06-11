#include "main.h"
/**
 * print_line - draws a straight
 * line in the terminal
 *
 * @n: number of lines to be drawn
 * Return: always (0)
 */
int print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n--)
			_putchar('_');
		_putchar('\n');
	}
	return (0);
}
