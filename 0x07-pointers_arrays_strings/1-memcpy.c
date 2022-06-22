#include "main.h"

/**
 * _memcpy - copy the content from a buffer
 * to another
 * @dest: pointer to destination buffer
 * @src: pointer to source buffer
 * @n: number of bytes to copy from source
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0, k = 0, f, g;
	char p = '\0';
	int set = 0;
	int i;
	while (*(dest + j) == p)
		j++;
	while (*(src + k) != p)
		k++;
	k--;
	for (f = 0; f < j; f++)
	{
		for (g = 0; g < k ; g++)
		{
			if (&*(dest + f) != &*(src + g))
			{
				if (set != 2)
					set = 1;
				else if (set == 2)
					break;
			}
			else
			{
				set = 2;
				break;
			}
		}
	}
	for (i = 0; i < (signed)n; i++)
	{
		if (i < j)
		{
			if (k && set == 1)
			{
				*(dest + i) = *(src + i);
				k--;
			}
		}
	}
	return (dest);
}
