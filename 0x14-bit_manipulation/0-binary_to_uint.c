#include "main.h"
/**
 * binary_to_uint - convert from binary to int
 * @b:a pointer to string
 * Return: the converted number or 0
 * otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		while (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;
	for (j = i; j >= 0; j--)
	{
		res += (b[j] - '0') << (i - j);
	}
	return (res);
}
