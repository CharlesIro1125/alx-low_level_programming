#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenate two string
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *tar;
	int i, p, k;

	k = 0;
	i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + k) != '\0')
		k++;
	tar = (char *)malloc(sizeof(char) * (i + k + 1));
	if (tar == NULL)
		return (NULL);
	for (p = 0; p < (i + k); p++)
	{
		if (p < i)
			*(tar + p) = *(s1 + p);
		else
			*(tar + p) = *(s2 + (p - i));
	}
	return (tar);
}
