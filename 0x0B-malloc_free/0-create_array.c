#include "main.h"
#include <stdlib.h>
/**
 * *create_array - a pointer that creates array
 * and initializes it
 * @size: the size of the buffer
 * @c: the initialized character
 * Return: int
 */
char *create_array(unsigned int size, char c)
{
	char *tar;
	unsigned int i;

	if (size == 0)
		return (NULL);
	tar = (char *)malloc(sizeof(c) * size);
	if (tar == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(tar + i) = c;
	}
	return (tar);
}
