#include "main.h"
/**
 * _strchr - function to search for the
 * presence of a string
 * @s: the buffer of string
 * @c: the character to search for
 * Return: a pointer to the first
 * occurance of the character
 */
char *_strchr(char *s, char c)
{
	int j = 0, k = 0, i;
	char p = "\0";
	char *ptr = NULL;

	while (*(s + k) != p)
		k++;
	for (i = 0; i < k; i++)
	{
		if (*(s + i) == c)
		{
			j = 1;
			break;
		}
	}
	if (j == 0)
		return (ptr);
	return (&s[i]);
}
