#include "main.h"

/**
 * print_rev - function that prints a string
 * in reverse order.
 * @str: A string pointer
 *
 * description: prints out the string in
 * reverse to stdout.
 * Return: returns string.
 */
void print_rev(char *str)
{
	int k = 0;
	char p = '\0';

	while (*(str + k) != p)
		k++;
	while (!(k < 1))
	{
		k--;
		_putchar(*(str + k));
	}
	_putchar('\n');
}
