#include "lists.h"
/**
 * get_nodeint_at_index - get an nth node
 * @head: pointer to struct listint
 * @index: the index of node
 * Return: listint
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = -1;

	if (head == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		return (NULL);
	}
	while (*head != NULL || i != index)
	{
		*head = (*head)->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (*head);
}
