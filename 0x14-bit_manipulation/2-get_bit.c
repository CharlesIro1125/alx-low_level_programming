#include "main.h"
/**
 * get_bit - get the bit at position
 * @n: long int
 * @index: index of bit to get
 * Return: the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int j = 0, k, res;
	unsigned long int h, p;
	char *bits;

	if (n == '\0')
		return (0);
	h = n;
	while (h)
	{
		h = h >> 1;
		j++;
	}
	j--;
	bits = malloc(sizeof(char) * (j + 2));
	if (bits == NULL)
		return (-1);
	for (k = j; k >= 0; k--)
	{
		p = n >> k;
		if (p & 1)
			bits[j - k] = '1';
		else
			bits[j - k] = '0';
	}
	bits[j + 1] = '\0';
	/*
	if (index > j + 1)
	{
		free(bits);
		return (-1);
	}
	*/
	res = bits[j - index] - '0';
	free(bits);
	return (res);
}
