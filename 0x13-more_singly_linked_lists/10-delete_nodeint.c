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
	unsigned int i = 0;
	listint_t *first;
	listint_t *new;

	if (*head == NULL)
	{
		return (NULL);
	}
	first = *head;
	while (*head != NULL && i != idx - 1)
	{
		i++;
		*head = (*head)->next;
	}
	if (i != idx - 1)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = (*head)->next;
	(*head)->next = new;
	*head = first;
	return (*head);
}
