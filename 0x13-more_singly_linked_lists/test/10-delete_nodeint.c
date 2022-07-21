#include "lists.h"
/**
 * delete_nodeint_at_index - insert a given node
 * at nth position
 * @head: pointer to pointer to struct listint
 * @index: the index of node
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *forward;
	listint_t *h;

	h = *head;
	if (index != 0)
	{
		while (h != NULL && i < index - 1)
		{
			i++;
			h = h->next;
		}
	}
	if ((h == NULL && i < index - 1) || (h == NULL && index != 0)) 
		return (-1);
	if (index == 0)
	{
		*head = h->next;
		free(h);
	}
	else
	{
		forward = h->next;
		h->next = forward->next;
		free(forward);
	}
	return (1);
}
