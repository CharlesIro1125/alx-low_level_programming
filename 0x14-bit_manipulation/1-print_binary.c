#include "main.h"
/**
 * print_binary - convert from int to binary
 * @n: long int
 * Return: the converted binary
 */
void print_binary(unsigned long int n)
{
	int j = 0, k;
	unsigned long int h, p;

	if (n == '\0')
		_putchar('0');
	h = n;
	while (h)
	{
		h = h >> 1;
		j++;
	}
	j--;
	for (k = j; k >= 0; k--)
	{
		p = n >> k;
		if (p & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
