#include "main.h"

/**
 * _strlen - function that cal the length
 * of a string.
 * @s: A Character pointer.
 *
 * description: calculates the length of
 * a string.
 * Return: returns string length.
 */
int _strlen(char *s)
{
	int k = 0;
	char p = '\0';

	while (*(s + k) != p)
	{
		k++;
	}
	return (k);
}
