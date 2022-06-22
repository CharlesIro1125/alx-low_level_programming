#include "main.h"

/**
 * _strpbrk - searches a string for any of a set bytes
 *
 * @s: string to be scanned
 * @accept: string containing the characters to match
 *
 * Return: address of first match if match or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int j = 0, k = 0, i, g;
	unsigned int count = 0;
	char p = '\0';
	
	while (*(s + k) != p)
		k++;
	count = k;
	while (*(accept + j) != p)
		j++;
	for (i = 0; i < j; i++)
	{
		for (g = 0; g < k; g++)
		{
			if (*(accept + i) == *(s + g))
			{
				if (g < count)
					count = g;
			}
		}
	}
	return (&*(s + count));
}
