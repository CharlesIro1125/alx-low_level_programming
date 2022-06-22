#include "main.h"

/**
 * _memset - A function that sets the memory
 * with constant
 * @s: a pointer.
 * @b: a constant value
 * @n: number of memory to set with constant
 * Description: a function that fills a buffer
 * with constant.
 * Return: a pointer to the buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0, i;
	char p = "\0";

	while (*(s + j) != p)
		j++;
	for (i = 0; i < n; i++)
	{
		if (i < j)
			*(s + i) = b;
	}
	return (s);
}
