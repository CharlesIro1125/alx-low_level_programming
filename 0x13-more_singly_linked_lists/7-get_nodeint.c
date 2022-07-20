#include "lists.h"
/**
 * get_nodeint_at_index - get an nth node
 * @head: pointer to struct listint
 * @index: the index of node
 * Return: listint
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *first;
	listint_t *hold;

	if (head == NULL)
	{
		return (NULL);
	}
	first = head;
	while (head != NULL && i != index)
	{
		i++;
		head = head->next;
	}
	if (i != index) 
		return (NULL);
	hold = head;
	head = first;
	return (hold);
}
