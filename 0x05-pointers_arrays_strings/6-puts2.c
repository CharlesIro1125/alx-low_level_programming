#include "main.h"

/**
 * puts2 - function that prints even
 * characters
 * @str: A string pointer
 *
 * description: prints out the even
 * characters to stdout.
 * Return: returns string.
 */
void puts2(char *str)
{
	int k = 0;
	char p = '\0';

	while (*(str + k) != p)
	{
		if ((k % 2) == 0)
		{
			_putchar(*(str + k));
		}
		k++;
	}
	_putchar('\n');
}
