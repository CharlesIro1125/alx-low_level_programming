#include "lists.h"
/**
 * getlen - function to return the length
 * of a string.
 * @s: pointer to char
 * Return: the length of the string
 */
unsigned int getlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * free_list - frees the elements of the list
 * @h: pointer to struct list_s
 * Return: void
 */
void free_list(list_t *h)
{
	list_t *prev;

	if (h == NULL)
	{
		free(h);
	}
	while (h != NULL)
	{
		prev = h;
		h = h->next;
		if (prev->str != NULL)
		{
			
			free(prev->str);
		}
		free(prev);
	}
	free(h);
}
