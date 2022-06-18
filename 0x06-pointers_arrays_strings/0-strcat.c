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
char * _strcat(char *dest, char *src)
{
	int k, w, j;
	char p = '\0';

	k = 0;
	w = 0;
	j = 0;
	while (dest[k] != p)
		k++;
	while (src[w] != p)
	{
		j = k + w;
		dest[j] = src[w];
		w++;
	}
	j = k + w;
	dest[j] = p;
	return (dest);
}
