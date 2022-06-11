#include "main.h"

/**
 * print_numbers - prints the numbers
 * from 0 to 9
 *
 * description: prints the digit from
 * 0 to 9
 * return: 0
 *
 */
int print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
