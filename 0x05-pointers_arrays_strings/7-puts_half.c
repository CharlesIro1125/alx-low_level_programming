#include "main.h"

/**
 * puts_half - function that prints half
 * the even characters.
 * @str: A string pointer
 *
 * description: prints out half the
 * characters from the left to stdout.
 * Return: returns string.
 */
void puts_half(char *str)
{
	int k = 0;
	int w;
	char p = '\0';

	while (*(str + k) != p)
		k++;
	w = (k / 2) + (k % 2);
	for ( ; w < k; w++)
	{
		_putchar(*(str + w));
	}
	_putchar('\n');
}
