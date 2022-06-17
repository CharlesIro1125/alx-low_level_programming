#include <stdio.h>
#include "main.h"

/**
 * _strcat - A function that concatenates two
 * string
 * @dest: A pointer of type char
 * @src: A pointer of type char
 *
 * Description: Performs a concatenation of the
 * second string to the first
 * Return: returns a pionter of char type.
 */
char *_strcat(char *dest, char *src)
{
	int k, w = 0;
	char p = '\0';

	while (*(dest + k) != p)
		k++;
	while (*(src + w) != p)
	{
		*(dest + (k + w)) = *(src + w);
		w++;
	}
	*(dest + (k + w)) = p;
	return (dest);
}
