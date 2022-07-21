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
	listint_t *first;
	listint_t *new;

	if (*head == NULL)
	{
		return (NULL);
	}
	first = *head;
	if (idx == 0)
		i = 0;
	while (*head != NULL && i != idx)
	{
		i++;
		*head = (*head)->next;
	}
	if (i != idx)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	new->n = n;
	new->next = (*head)->next;
	(*head)->next = new;
	*head = first;
	return (*head);
}
