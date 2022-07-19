#include "lists.h"
/**
 * listint_len - number of elements in struct
 * listint
 * @h: pointer to the struct listint
 * Return: the integer value
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return ('\0');
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
