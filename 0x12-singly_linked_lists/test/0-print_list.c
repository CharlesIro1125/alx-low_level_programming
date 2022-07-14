#include "lists.h"
/**
 * print_list - prints out the elements
 * of the list
 * @h: pointer to struct list_s
 * Return: the number of lists
 */
size_t print_list(const list_t *h)
{
	size_t l = 0;
	unsigned int i;

	if (h == NULL)
		return (-1);
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			i = getlen(h->str);
			printf("[%d] %s\n", i, h->str);
		}
		else
			printf("[%d] %s\n", 0, "(nil)");
		l++;

		h = h->next;
	}
	return (l);
}
