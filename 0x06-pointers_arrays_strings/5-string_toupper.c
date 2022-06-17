#include <stdio.h>
#include "main.h"

/**
 * string_toupper - A function that changes
 * the array to uppercase.
 * @a: A pointer to source array of
 * type char
 * Description: changes array to uppercase
 * Return: string pointer
 */
char *string_toupper(char *a)
{
	int j = 0;
	char p = '\0';

	while (*(a + j) != p)
	{
		if (*(a + j) >= 'a' && *(a + j) <= 'z')
		{
			*(a + j) = *(a + j) - 32;
		}
		j++;
	}
	return (a);
}
