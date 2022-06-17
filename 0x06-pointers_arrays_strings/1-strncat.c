#include <stdio.h>
#include "main.h"

/**
 * _strncat - A function that concatenates two
 * string, taking n byte from source string.
 * @dest: A pointer to destination string of
 * type char
 * @src: A pointer to source string of type char
 * @n: The number of byte to get from source
 * string
 * Description: Performs a concatenation of the
 * source string to destination with n bytes
 * taken from source
 * Return: returns a pionter of char type.
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, w = 0;
	char p = '\0';

	while (*(dest + k) != p)
		k++;
	while (*(src + w) != p)
	{
		if (w < n)
		{
			*(dest + k + w) = *(src + w);
			w++;
		}
		else
			break;
	}
	*(dest + k + w) = '\0';
	return (dest);
}
