#include "main.h"

/**
 * _strspn - gets the length of the prefix of a substring
 *
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int j = 0, k = 0, i, g;
	unsigned int count = 0;
	char p = '\0';
	char h = ',';

	while (*(s + k) != h)
		k++;
	while (*(accept + j) != p)
		j++;
	for (i = 0; i < j; i++)
	{
		for (g = 0; g < k; g++)
		{
			if (*(accept + i) == *(s + g))
				count++;
		}
	}
	return (count);
}
