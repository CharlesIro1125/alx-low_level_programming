#include "main.h"
/**
 * main - Entry point
 *
 * Description: this function prints the
 * alphabet in lowercase
 * Return: int of zero
 *
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');

	r = _islower('p');
	_putchar(r + '0');

	r = _islower('l');
	_putchar(r + '0');

	_putchar('\n');
	return (0);
}
