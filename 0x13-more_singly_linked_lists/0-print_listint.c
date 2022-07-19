#include "lists.h"
/**
 * print_listint - print the elements of struct
 * listint
 * @h: pointer to the struct listint
 * Return: the integer value
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (-1);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
