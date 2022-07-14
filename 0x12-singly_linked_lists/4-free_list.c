#include "lists.h"
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
			free(prev->str);
		free(prev);
	}
	free(h);
}
