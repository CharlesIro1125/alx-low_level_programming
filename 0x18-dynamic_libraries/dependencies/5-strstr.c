#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: string to be scanned
 * @needle: string to locate
 *
 * Return: pointer to located substring if match or
 * NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	int j = 0, k = 0, i, g, f;
	int count = 0;
	char p = '\0';
	char *nul = NULL;

	while (*(haystack + k) != p)
		k++;
	while (*(needle + j) != p)
		j++;
	for (i = 0; i < j; i++)
	{
		for (g = 0; g < k; g++)
		{
			if (*(needle + i) == *(haystack + g))
			{
				for (f = 0; f < j; f++)
				{
					if (*(needle + i + f) == *(haystack + g + f))
						count++;
					else
						break;
				}
			}
			if (count == j)
			{
				i = j;
				break;
			}
			count = 0;
		}
	}
	if (count != j)
		return (nul);
	return (&*(haystack + g));
}
