#include "main.h"

/**
 * _puts - function that prints a string
 * @str: A string array pointer.
 *
 * description: prints out the string to
 * stdout.
 * Return: returns string.
 */
void _puts(char *str)
{
	int k = 0;
	char p = '\0';

	while (*(str + k) != p)
	{
		_putchar(*(str + k));
		k++;
	}
	_putchar('\n');
}
