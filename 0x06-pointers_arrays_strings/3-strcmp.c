#include <stdio.h>
#include "main.h"

/**
 * _strcmp - A function that compares
 * two strings
 * @s1: A pointer to a string of
 * type char
 * @s2: A pointer to a string of type char
 *
 * Description: compares the source string
 * to destination string
 *
 * Return: return int.
 */
int _strcmp(char *s1, char *s2)
{
	int k, w, j = 0;
	char p = '\0';

	while (*(s1 + k) != p || *(s2 + k) != p)
	{
		if (j == 0)
		{
			j = *(s1 + k) - *(s2 + k);
			k++;
		}
		else
			break;
	}
	if (j == 0)
	{
		j = *(s1 + k) - *(s2 + k);
	}
	return (j);
}
