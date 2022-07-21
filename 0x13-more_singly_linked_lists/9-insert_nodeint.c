#include "lists.h"
/**
 * insert_nodeint_at_index - insert a given node
 * at nth position
 * @head: pointer to pointer to struct listint
 * @idx: the index of node
 * @n: integer
 * Return: listint
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *new;
	listint_t *hold;

	if (*head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
		i = 0;
	hold = *head;
	while (hold != NULL && i != idx)
	{
		i++;
		hold = hold->next;
	}
	if (hold == NULL)
		return (NULL);
	if (i != idx)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = hold;
		hold = new;
	}
	else
	{
		new->n = n;
		new->next = hold->next;
		hold->next = new;
	}
	return (new);
}
