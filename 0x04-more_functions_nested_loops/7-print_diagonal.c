#include "main.h"

/**
 * print_diagonal - draws a
 * diagonal line in the terminal
 * @n : input
 *
 * Return: Alwaysm 0(success)
 *
 */
int print_diagonal(int n)
{
	int count = 0;
	int size;

	if (n > 0)
	{
		while (count < n)
		{
			for (size = 0; size < count; size++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
		_putchar('\n');
	return (0);
}
