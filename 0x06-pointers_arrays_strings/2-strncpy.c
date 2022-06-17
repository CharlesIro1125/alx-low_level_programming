#include <stdio.h>
#include "main.h"

/**
 * _strncpy - A function that copies from
 * source to destn, taking n byte from
 * source string.
 * @dest: A pointer to destination string of
 * type char
 * @src: A pointer to source string of type char
 * @n: The number of byte to get from source
 * string
 * Description: copies from source string
 * to destination with n bytes
 * taken from source
 * Return: returns a pionter of char type.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k, w = 0;
	char p = '\0';

	while (*(src + k) != p)
		k++;
	while (k > 0)
	{
		k--;
		if (w < n)
		{
			*(dest + w) = *(src + w);
			w++;
		}
		else
			break;
	}
	if (k < n)
	{
		*(dest + w) = '\0';
	}
	return (dest);
}
