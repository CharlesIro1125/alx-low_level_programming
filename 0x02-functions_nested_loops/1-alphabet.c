#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: this function uses a defined
 * function called _putchar
 * Return: int of zero
 *
 */
void print_alphabet(void)
{
	int k;

	for (k = 97; k <= 122; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
