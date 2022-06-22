#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Description: this function uses a defined
 * function called _putchar
 * Return: int of zero
 *
 */
void print_alphabet_x10(void)
{
	int k;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (k = 97; k <= 122; k++)
			_putchar(k);
		_putchar('\n');
	}
}
