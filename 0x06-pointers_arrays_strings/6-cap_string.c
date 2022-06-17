#include <stdio.h>
#include "main.h"

/**
 * cap_string - A function that changes
 * the array to uppercase.
 * @a: A pointer to source array of
 * type char
 * Description: changes array to uppercase
 * Return: string pointer
 */
char *cap_string(char *a)
{
	int i = 0;
	int j = 0;
	int set = 0;
	char check[] = ",;.!?(){}\n\t\" ";
	char p = '\0';

	while (*(a + j) != p)
	{
		for (i = 0; *(check + i) != p; i++)
		{
			if (*(a + j) == *(check + i))
			{
				set = 1;
				break;
			}
		}
		j++;
		if (set)
		{
			if (*(a + j) >= 'a' && *(a + j) <= 'z')
			{
				*(a + j) = *(a + j) - 32;
			}
			set = 0;
		}
	}
	return (a);
}
