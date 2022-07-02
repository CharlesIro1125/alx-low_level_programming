#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - a pointer that creates array
 * and initializes it string
 * @str: the initialized string
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *tar;
	int i;
	int p;

	i = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i) != '\0')
		i++;
	i++;
	tar = (char *)malloc(sizeof(char) * i);
	if (tar == NULL)
		return (NULL);
	for (p = 0; p < i; p++)
	{
		*(tar + p) = *(str + p);
	}
	return (tar);
}
